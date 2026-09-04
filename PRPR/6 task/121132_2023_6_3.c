#include <stdio.h>
#include <stdlib.h>

void alokuj_2D_pole(int n, int m, int ***arr) {
	int i, j;
	*arr = (int **)malloc(n * sizeof(int *));
	for (i=0; i<n; i++) {
		(*arr)[i] = (int *)malloc(m * sizeof(int));
	}
	printf ("Napiste %d cisiel: ", m+n);
	for (i=0; i<n; i++) {
		for (j=0; j<m; j++) {
			scanf ("%d", &(*arr)[i][j]);
		}
	}
}

void vypis_2D_pole(int n, int m, int ***arr) {
	int i, j;
	for (i=0; i<n; i++) {
		for (j=0; j<m; j++) {
			printf ("%d ", (*arr)[i][j]);
		}
		printf ("\n");
	}
}

void uvolni(int n, int m, int ***arr) {
	int i;
	for (i = 0; i < n; i++) {
		free((*arr)[i]);
	}
	free(*arr);
}

int main () {
	int n, m;
	int **arr = NULL;
	printf ("Napiste 2 cisla: ");
	while (n<=0 || m<=0) {
		scanf ("%d %d", &n, &m);
	}
	alokuj_2D_pole(n, m, &arr);
	vypis_2D_pole(n, m, &arr);
	uvolni(n, m, &arr);
	return 0;
}
