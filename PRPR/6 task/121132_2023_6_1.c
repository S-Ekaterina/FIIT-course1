#include <stdio.h>
#include <stdlib.h>

int main () {
	int n, i;
	char *arr;
	printf ("Napiste cislo: ");
	scanf ("%d", &n);
	while (n <= 0) {
		scanf ("%d", &n);
	}
	arr = (char *)malloc(n * sizeof(char));
	if (arr == NULL) {
        printf("Chyba pri alokaci pameti.\n");
        return 1;
    }
    for (i=0; i<n; i++) {
    	scanf (" %c", &arr[i]);
    }
	for (i=n-1; i>=0; i--) {
		printf ("%c", arr[i]);
	}
	free(arr);
	return 0;
}
