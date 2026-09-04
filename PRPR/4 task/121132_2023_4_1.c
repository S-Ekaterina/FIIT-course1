#include <stdio.h>

int zisti_prvocislo(int cislo) {
	int j;
	if (cislo <= 1) {
		return -1;
	}
	for (j=2; j<cislo; j++) {
		if (cislo%j == 0) {
			return -1;
		}
	}
	return 1;
}

main () {
	int a, b, i;
	printf ("Napiste 2 cisla: ");
	scanf ("%d %d", &a, &b);
	for (i=(a+1); i<=b; i++) {
		if (zisti_prvocislo(i) == 1) {
			printf ("%d\n", i);
		}
	}
	return 0;
}
