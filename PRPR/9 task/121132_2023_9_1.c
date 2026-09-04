#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i=0, j=0, b=0, max=0;
    char arr[100][100];
    char fg[100];
    int aa[100];
    for (j=0; j<100; j++) {
        aa[j] = 1;
    }
    printf("Napiste mena(0 - koniec): ");
    scanf("%s", arr[0]);
    while (strcmp(arr[i], "0") != 0) {
        i++;
        scanf("%s", fg);
        for (b=0; b<i; b++) {
            if (strcmp(fg, arr[b]) == 0) {
                aa[b]++;
                break;
            } else if (b == i - 1) {
                strcpy(arr[i], fg);
            }
        }
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
    return 0;
}
