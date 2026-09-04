#include <stdio.h>

int parne(int x[], int pocetx, int y[]) {
	int i, j=0;
	for (i=0; i<pocetx; i++) {
		if(x[i]%2==0) {
			y[j] = x[i];
			j++;
		}
	}
	return j;
}

main () {
	int x[]={4, 7, 1, 3, 2, 5, 6}, y[100], pocetx=7;
	int pocety, a;
	pocety = parne(x, pocetx, y);
	printf ("pocety: %d\n", pocety);
	printf ("y: {");
	for (a=0; a<pocety; a++) {
		if (a==(pocety-1)) {
			printf ("%d}", y[a]);
			continue;
		}
		printf ("%d, ", y[a]);
	}
	return 0;
}
