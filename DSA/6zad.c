#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10000

typedef struct Person {
    char* key;
    double balance;
    struct Person* next;
} Person;

typedef struct {
    Person* table[SIZE];
} HashTable;

unsigned long fnv1a(unsigned char *str) {
    unsigned long hash = 2166136261UL;
    int c;
    while ((c = *str++))
        hash = (hash ^ c) * 16777619;
    return hash % SIZE;
}

unsigned long hash(char* str) {
    return fnv1a((unsigned char*)str);
}

Person* newPerson(char* key, double balance) {
    Person* person = (Person*)malloc(sizeof(Person));
    person->key = strdup(key);
    person->balance = balance;
    person->next = NULL;
    return person;
}

int insert(HashTable* h, char* key, double balance) {
    int id = hash(key);
    Person* current = h->table[id];
    while (current != NULL) {
        if (strcmp(current->key, key) == 0)
            return 1;
        current = current->next;
    }
    Person* p = newPerson(key, balance);
    if (p == NULL)
        return 0;
    if (h->table[id] == NULL)
        h->table[id] = p;
    else {
        current = h->table[id];
        while (current->next != NULL)
            current = current->next;
        current->next = p; 
    }
    return 0;
}

Person* search(HashTable* h, char* key) {
    int id = hash(key);
    Person* current = h->table[id];
    while (current != NULL) {
        if (strcmp(current->key, key) == 0)
            return current;
        current = current->next;
    }
    return NULL;
}

void update(HashTable* h, char* key, double b, int *m) {
    Person* person = search(h, key);
    if (person != NULL && (person->balance + b) >= 0)
        person->balance += b;
    else {
        if (*m == 0)
            printf("update failed");
        else 
            printf("\nupdate failed");
        (*m)++;
    }
}

int delete(HashTable* h, char* key) {
    int id = hash(key);
    Person* current = h->table[id];
    Person* prev = NULL;
    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            if (prev == NULL)
                h->table[id] = current->next;
            else
                prev->next = current->next;
            free(current->key);
            free(current);
            return 0;
        }
        prev = current;
        current = current->next;
    }
    return 1;
}

int main() {
    HashTable h = {NULL};
    int m=0, i, result;
    double balance;
    char c, key[31], name[10], surname[10], birthdate[11], bal[20];
    setlocale(LC_NUMERIC, "C");

    while (scanf(" %c", &c) != EOF) {
        if (c == 'i') {
            scanf("%s %s %s %s", name, surname, birthdate, bal);
            for(i = 0; bal[i]; i++) {
                if(bal[i] == ',')
                    bal[i] = '.';
            }
            balance = atof(bal);
            sprintf(key, "%s %s %s", name, surname, birthdate);
            result = insert(&h, key, balance);
            if (result == 1) {
                if (m == 0)
                    printf("insert failed");
                else
                    printf("\ninsert failed");
                m++;
            }
        }
        else if (c == 's') {
            scanf("%s %s %s", name, surname, birthdate);
            sprintf(key, "%s %s %s", name, surname, birthdate);
            Person* result = search(&h, key);
            if (result != NULL) {
                sprintf(bal, "%.2lf", result->balance);
                for(i = 0; bal[i]; i++) {
                    if(bal[i] == '.')
                        bal[i] = ',';
                }
                if (m == 0)
                    printf("%s", bal);
                else
                    printf("\n%s", bal);
                m++;
            }
            else {
                if (m == 0)
                    printf("search failed");
                else
                    printf("\nsearch failed");
                m++;
            }
        }
        else if (c == 'd') {
            scanf("%s %s %s", name, surname, birthdate);
            sprintf(key, "%s %s %s", name, surname, birthdate);
            result = delete(&h, key);
            if (result == 1) {
                if (m == 0)
                    printf("delete failed");
                else
                    printf("\ndelete failed");
                m++;
            }
        }
        else if (c == 'u') {
            scanf("%s %s %s %s", name, surname, birthdate, bal);
            for(i = 0; bal[i]; i++) {
                if(bal[i] == ',')
                    bal[i] = '.';
            }
            balance = atof(bal);
            sprintf(key, "%s %s %s", name, surname, birthdate);
            update(&h, key, balance, &m);
        }
    }
    for (i=0; i<SIZE; i++) {
        Person* current = h.table[i];
        while (current != NULL) {
            Person* temp = current;
            current = current->next;
            free(temp->key);
            free(temp);
        }
    } 
    return 0;
}
