#include <stdio.h>

int delitele (int x[], int pocetx, int y[], int k) {
	int i, j=0;
	for (i=0; i<pocetx; i++) {
		if (k%x[i] == 0) {
			y[j] = x[i];
			j++;
		}
	}
	return j;
}

int main () {
	int i, pocetx = 10;
	int x[] = {4, 7, 10, 2, 3, 9, 6, 5, 8, 12}, y[10];
	int pocety = delitele(x, pocetx, y, 24);
	for (i=0; i<pocety; i++) {
		printf ("%d ", y[i]);
	}
	return 0;
}
