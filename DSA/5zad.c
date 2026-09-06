#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Person {
    int id;
    char meno[15];
    char priezvisko[15];
    char data[11];
} Person;

typedef struct Node {
    Person person;
    struct Node *vlavo;
    struct Node *vpravo;
    int velkost;
} Node;

int max(int a, int b) {
    return (a > b) ? a : b;
}

Node* novyNode(Person person) {
    Node* node = (Node*) malloc(sizeof(Node));
    node->person = person;
    node->vlavo = NULL;
    node->vpravo = NULL;
    node->velkost = 1;
    return node;
}

int velkost(Node *N) {
    return N ? N->velkost : 0;
}

Node *vpravoRotacia(Node *y) {
    Node *x = y->vlavo;
    Node *z = x->vpravo;
    x->vpravo = y;
    y->vlavo = z;
    y->velkost = max(velkost(y->vlavo), velkost(y->vpravo)) + 1;
    x->velkost = max(velkost(x->vlavo), velkost(x->vpravo)) + 1;
    return x;
}

Node *vlavoRotacia(Node *x) {
    Node *y = x->vpravo;
    Node *z = y->vlavo;
    y->vlavo = x;
    x->vpravo = z;
    x->velkost = max(velkost(x->vlavo), velkost(x->vpravo)) + 1;
    y->velkost = max(velkost(y->vlavo), velkost(y->vpravo)) + 1;
    return y;
}

int B(Node *N) {
    if (N == NULL)
        return 0;
    return velkost(N->vlavo) - velkost(N->vpravo);
}

Node* insert(Node* node, Person person) {
    if (node == NULL)
        return(novyNode(person));
    if (person.id < node->person.id)
        node->vlavo = insert(node->vlavo, person);
    else if (person.id > node->person.id)
        node->vpravo = insert(node->vpravo, person);
    else
        return node;
    node->velkost = 1 + max(velkost(node->vlavo), velkost(node->vpravo));
    int balance = B(node);
    if (balance > 1 && person.id < node->vlavo->person.id)
        return vpravoRotacia(node);
    if (balance < -1 && person.id > node->vpravo->person.id)
        return vlavoRotacia(node);
    if (balance > 1 && person.id > node->vlavo->person.id) {
        node->vlavo = vlavoRotacia(node->vlavo);
        return vpravoRotacia(node);
    }
    if (balance < -1 && person.id < node->vpravo->person.id) {
        node->vpravo = vpravoRotacia(node->vpravo);
        return vlavoRotacia(node);
    }
    return node;
}

Node * min(Node* node) {
    Node* t = node;
    while (t->vlavo != NULL)
        t = t->vlavo;
    return t;
}

Node* Delete(Node* root, int id) {
    if (root == NULL)
        return root;
    if (id < root->person.id)
        root->vlavo = Delete(root->vlavo, id);
    else if (id > root->person.id)
        root->vpravo = Delete(root->vpravo, id);
    else {
        if ((root->vlavo == NULL) || (root->vpravo == NULL)) {
            Node *temp = root->vlavo ? root->vlavo : root->vpravo;
            if (temp == NULL) {
                temp = root;
                root = NULL;
            }
			else {
                *root = *temp;
            }
            free(temp);
        }
		else {
            Node* temp = min(root->vpravo);
            root->person = temp->person;
            root->vpravo = Delete(root->vpravo, temp->person.id);
        }
    }
    if (root == NULL)
        return root;
    root->velkost = 1 + max(velkost(root->vlavo), velkost(root->vpravo));
    int balance = B(root);
    if (balance > 1 && B(root->vlavo) >= 0)
        return vpravoRotacia(root);
    if (balance > 1 && B(root->vlavo) < 0) {
        root->vlavo = vlavoRotacia(root->vlavo);
        return vpravoRotacia(root);
    }
    if (balance < -1 && B(root->vpravo) <= 0)
        return vlavoRotacia(root);
    if (balance < -1 && B(root->vpravo) > 0) {
        root->vpravo = vpravoRotacia(root->vpravo);
        return vlavoRotacia(root);
    }
    return root;
}

Node* search(Node* root, int id) {
    if (root == NULL || root->person.id == id)
        return root;
    if (root->person.id < id)
        return search(root->vpravo, id);
    return search(root->vlavo, id);
}

void interval(Node* root, int start, int end, Person **result, int *r) {
    if (root == NULL)
        return;
    if (start < root->person.id)
        interval(root->vlavo, start, end, result, r);
    if (start <= root->person.id && end >= root->person.id) {
        *result = realloc(*result, (*r + 1) * sizeof(Person));
        if (*result == NULL) {
            return;
        }
        (*result)[(*r)++] = root->person;
    }
    if (end > root->person.id)
        interval(root->vpravo, start, end, result, r);
}

void freeTree(Node *root) {
    if (root != NULL) {
        freeTree(root->vlavo);
        freeTree(root->vpravo);
        free(root);
    }
}

int main() {
    Node *root = NULL;
    Person *result = NULL;
    int r = 0;
    int a, b, i;
    char c;
    while (scanf(" %c", &c) == 1 && (c == 'i' || c == 's' || c == 'd')) {
        if (c == 'i') {
            Person p;
            scanf(" %d %s %s %s", &p.id, p.meno, p.priezvisko, p.data);
            root = insert(root, p);
        } else if (c == 's') {
            if (scanf(" %d %d", &a, &b) == 2) {
                interval(root, a, b, &result, &r);
            } else {
                Node *found = search(root, a);
                if (found != NULL) {
                    result = realloc(result, (r + 1) * sizeof(Person));
                    if (result == NULL) {
                        return 1;
                    }
                    result[r++] = found->person;
                }
            }
        } else if (c == 'd') {
            scanf(" %d", &a);
            root = Delete(root, a);
        }
    }
    if (result != NULL) {
        printf("%d %s %s %s", result[0].id, result[0].meno, result[0].priezvisko, result[0].data);
        for (i=1; i<r; i++) {
            printf("\n%d %s %s %s", result[i].id, result[i].meno, result[i].priezvisko, result[i].data);
        }
    }
    freeTree(root);
    free(result);
    return 0;
}
