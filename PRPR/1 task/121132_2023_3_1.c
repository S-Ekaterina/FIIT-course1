#include <stdio.h>

main () {
	int N, i;
	float j, max, min;
	printf ("Napiste cislo: ");
	scanf ("%d", &N);
	printf ("Napiste %d realnych cisiel: ", N);
	for (i=0; i<N; i++) {
		scanf ("%f", &j);
		if (i == 0) {
			max = j;
			min = j;
		}
		else {
			if (j>max) {
				max = j;
			}
			if (j<min) {
				min = j;
			}
		}
	}
	printf ("Minimum: %.2f\n", min);
	printf ("Maximum: %.2f\n", max);
	return 0;
}
