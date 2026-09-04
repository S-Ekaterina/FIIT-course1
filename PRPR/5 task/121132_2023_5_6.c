#include <stdio.h>
#include <stdlib.h>

int alokuj_1D_pole (int **x, int m) {
	int i;
	*x = (int *)malloc(m * sizeof(int));
	if (*x == NULL) {
        printf("Chyba pri alokaci pameti.\n");
        return;
    }
	for (i=0; i<m; i++) {
		scanf ("%d", &(*x)[i]);
	}
}

void vypis_1D_pole (int **x, int m) {
	int i;
	for (i=0; i<m; i++) {
		printf ("%d, ", (*x)[i]);
	}
}

int maximum_poz(int **x, int m) {
	int i, max=(*x)[0], k;
	for (i=1; i<m; i++) {
		if (max<(*x)[i]) {
			max = (*x)[i];
			k = i;
		}
	}
	return k;
}

int minimum_poz(int **x, int m) {
	int i, min=(*x)[0], k;
	for (i=1; i<m; i++) {
		if (min>(*x)[i]) {
			min = (*x)[i];
			k = i;
		}
	}
	return k;
}

void uvolni (int **x, int m) {
	free(*x);
}

int main () {
	int *x, m, map, mip;
	printf ("Napiste cislo: ");
	scanf ("%d", &m);
	alokuj_1D_pole (&x, m);
	vypis_1D_pole (&x, m);
	map = maximum_poz(&x, m);
	mip = minimum_poz(&x, m);
	printf ("\nmax:%d \nmin:%d", map, mip);
	uvolni (&x, m);
	return 0;
}
