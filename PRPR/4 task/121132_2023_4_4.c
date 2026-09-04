#include <stdio.h>

int sucet(int x) {
	if (x <= 0) {return 0;}
	else {
		if (x%2 == 0) {
			sucet(x-1);
		}
		else {return x + sucet(x-2);}
	}
}

main () {
	int N;
	printf ("Napiste cislo: ");
	scanf ("%d", &N);
	printf ("%d\n", sucet(N-1));
	return 0;
}
