#include <stdio.h>

main () {
	int N, i, j=0;
	int arr[100];
	printf ("Napiste cislo: ");
	scanf ("%d", &N);
	for (i=0; i<N; i++) {
		scanf ("%d", &arr[i]);
		if (arr[i] > 0 && arr[i] <= 100) {
			j++;
		}
	}
	printf ("%d", j);
	return 0;
}
