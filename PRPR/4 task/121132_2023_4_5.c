#include <stdio.h>

int sucet(int x) {
	int a;
	if (x <= 0) {return 0;}
	else {
		a = x-x%10;
		a /= 10;
		return x%10 + sucet(a);
	}
}

main () {
	int N;
	printf ("Napiste cislo: ");
	scanf ("%d", &N);
	printf ("%d\n", sucet(N));
	return 0;
}
