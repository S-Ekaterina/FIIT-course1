#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i=0, j=0, b=0, max=0;
    char **arr = NULL;
    char fg[100];
    int *aa = NULL;
    arr = (char**)malloc(sizeof(char*));
    aa = (int*)malloc(sizeof(int));
    if (arr == NULL || aa == NULL) {
        printf("Chyba pri alokacii pamate.\n");
        return 1;
    }
    printf("Napiste mena(0 - koniec): ");
    scanf("%s", fg);
    while (strcmp(fg, "0") != 0) {
    	arr = (char**)realloc(arr, (i+1) * sizeof(char*));
        aa = (int*)realloc(aa, (i+1) * sizeof(int));
        if (arr == NULL || aa == NULL) {
            fprintf(stderr, "Chyba pri alokacii pamate.\n");
            return 1;
        }
        arr[i] = (char*)malloc((strlen(fg) + 1) * sizeof(char));
        if (arr[i] == NULL) {
            printf("Chyba pri alokacii pamate.\n");
            return 1;
        }
        strcpy(arr[i], fg);
        aa[i] = 1;
        for (b = 0; b < i; b++) {
            if (strcmp(fg, arr[b]) == 0) {
                aa[b]++;
                break;
            } 
			else if (b == i - 1) {
                aa[i] = 1;
            }
    	}
    	i++;
    	scanf("%s", fg);
    }
    max = aa[0];
    for (j=1; j<i; j++) {
        if (aa[j] > max) {
            max = aa[j];
        }
    }
    for (j=0; j<i; j++) {
    	if (aa[j] == max) {
    		printf("%s\n", arr[j]);
		}
	}
    for (j=0; j<i; j++) {
        free(arr[j]);
    }
    free(arr);
    free(aa);
    return 0;
}
