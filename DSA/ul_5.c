#include <stdio.h>
#include <stdlib.h>

typedef struct Clovek
{
    int id;
    char data[41];
    struct Clovek *left;
    struct Clovek *right;
    int height;
} Clovek;

void copirovanie(char *dest, char *src)
{
    while (*src)
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

Clovek *newClovek(int id, char *first_name, char *last_name, char *birth_date)
{
    Clovek *clovek = (Clovek *)malloc(sizeof(Clovek));

    clovek->id = id;
    copirovanie(clovek->data, first_name);
    copirovanie(clovek->data + 15, last_name);
    copirovanie(clovek->data + 30, birth_date);
    clovek->left = NULL;
    clovek->right = NULL;
    clovek->height = 1;
    return clovek;
}

int maxim(int a, int b)
{
    return (a > b) ? a : b;
}

int height(Clovek *clovek)
{
    if (clovek == NULL)
    {
        return 0;
    }
    return clovek->height;
}

int getBalance(Clovek *clovek)
{
    if (clovek == NULL)
    {
        return 0;
    }
    return height(clovek->left) - height(clovek->right);
}

Clovek *rightRotate(Clovek *oldRoot)
{
    Clovek *newParent = oldRoot->left;
    Clovek *subtreeRoot = newParent->right;

    newParent->right = oldRoot;
    oldRoot->left = subtreeRoot;

    oldRoot->height = maxim(height(oldRoot->left), height(oldRoot->right)) + 1;
    newParent->height = maxim(height(newParent->left), height(newParent->right)) + 1;

    return newParent;
}

Clovek *leftRotate(Clovek *oldRoot)
{
    Clovek *newParent = oldRoot->right;
    Clovek *subtreeRoot = newParent->left;

    newParent->left = oldRoot;
    oldRoot->right = subtreeRoot;

    oldRoot->height = maxim(height(oldRoot->left), height(oldRoot->right)) + 1;
    newParent->height = maxim(height(newParent->left), height(newParent->right)) + 1;

    return newParent;
}

Clovek *insertClovek(Clovek *clovek, int id, char *first_name, char *last_name, char *birth_date)
{
    if (clovek == NULL)
    {
        return newClovek(id, first_name, last_name, birth_date);
    }

    if (id < clovek->id)
    {
        clovek->left = insertClovek(clovek->left, id, first_name, last_name, birth_date);
    }
    else if (id > clovek->id)
    {
        clovek->right = insertClovek(clovek->right, id, first_name, last_name, birth_date);
    }
    else
    {
        return clovek;
    }

    clovek->height = 1 + maxim(height(clovek->left), height(clovek->right));

    int balance = getBalance(clovek);

    if (balance > 1 && id < clovek->left->id)
    {
        return rightRotate(clovek);
    }

    if (balance < -1 && id > clovek->right->id)
    {
        return leftRotate(clovek);
    }

    if (balance > 1 && id > clovek->left->id)
    {
        clovek->left = leftRotate(clovek->left);
        return rightRotate(clovek);
    }

    if (balance < -1 && id < clovek->right->id)
    {
        clovek->right = rightRotate(clovek->right);
        return leftRotate(clovek);
    }

    return clovek;
}

Clovek *search(Clovek *clovek, int id)
{
    if (clovek == NULL || clovek->id == id)
    {
        return clovek;
    }

    if (id < clovek->id)
    {
        return search(clovek->left, id);
    }
    return search(clovek->right, id);
}

int novyRiadok = 0;
void printClovek(Clovek *clovek)
{
    if (clovek == NULL)
    {
        return;
    }
    if (novyRiadok)
    {
        printf("\n");
    }
    novyRiadok++;
    printf("%d %s %s %s", clovek->id, clovek->data, clovek->data + 15, clovek->data + 2 * 15);
}

void searchRange(Clovek *clovek, int start_id, int end_id)
{
    if (clovek == NULL)
    {
        return;
    }

    if (clovek->id < start_id)
    {
        searchRange(clovek->right, start_id, end_id);
    }
    else if (clovek->id > end_id)
    {
        searchRange(clovek->left, start_id, end_id);
    }
    else
    {
        searchRange(clovek->left, start_id, end_id);
        if (clovek->id >= start_id && clovek->id <= end_id)
        {
            printClovek(clovek);
        }
        searchRange(clovek->right, start_id, end_id);
    }
}

Clovek *deleteClovek(Clovek *root, int id)
{
    if (root == NULL)
    {
        return root;
    }

    if (id < root->id)
    {
        root->left = deleteClovek(root->left, id);
    }
    else if (id > root->id)
    {
        root->right = deleteClovek(root->right, id);
    }
    else
    {
        if (root->left == NULL)
        {
            Clovek *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            Clovek *temp = root->left;
            free(root);
            return temp;
        }

        Clovek *temp = root->right;
        while (temp->left != NULL)
        {
            temp = temp->left;
        }
        root->id = temp->id;
        copirovanie(root->data, temp->data);
        copirovanie(root->data + 15, temp->data + 15);
        copirovanie(root->data + 30, temp->data + 30);
        root->right = deleteClovek(root->right, temp->id);
    }

    root->height = 1 + maxim(height(root->left), height(root->right));

    int balance = getBalance(root);

    if (balance > 1 && getBalance(root->left) >= 0)
    {
        return rightRotate(root);
    }

    if (balance > 1 && getBalance(root->left) < 0)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    if (balance < -1 && getBalance(root->right) <= 0)
    {
        return leftRotate(root);
    }

    if (balance < -1 && getBalance(root->right) > 0)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }

    return root;
}

void freeTree(Clovek *clovek)
{
    if (clovek == NULL)
    {
        return;
    }
    freeTree(clovek->left);
    freeTree(clovek->right);
    free(clovek);
}

int main()
{
    Clovek *root = NULL;

    char operation;
    int id;
    char first_name[15];
    char last_name[15];
    char birth_date[11];

    while ((operation = getchar()) != EOF)
    {
        if (operation == 'i')
        {
            if (scanf("%d", &id) != 1)
                break;
            scanf("%s %s %s", first_name, last_name, birth_date);
            root = insertClovek(root, id, first_name, last_name, birth_date);
        }
        else if (operation == 'd')
        {
            if (scanf("%d", &id) != 1)
                break;
            root = deleteClovek(root, id);
        }
        else if (operation == 's')
        {
            int start_id, end_id;
            if (scanf("%d %d", &start_id, &end_id) == 2)
            {
                if (start_id > end_id)
                {
                    int temp = start_id;
                    start_id = end_id;
                    end_id = temp;
                }
                searchRange(root, start_id, end_id);
            }
            else
            {
                scanf("%d", &id);
                Clovek *result = search(root, start_id);
                printClovek(result);
            }
        }
    }

    freeTree(root);

    return 0;
}
