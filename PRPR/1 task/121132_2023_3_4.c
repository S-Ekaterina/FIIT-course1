#include <stdio.h>

main () {
	int N, i, j=0, h=1;
	scanf ("%d", &N);
	while (N<=0) {
		printf ("Napiste kladne cislo: ");
		scanf ("%d", &N);
	}
	for (i=1; i<=N; i++) {
		h *= i;
	}
	printf ("%d", h);
	return 0;
}
