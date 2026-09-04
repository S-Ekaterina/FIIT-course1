#include <stdio.h>

main () {
	int N, i, j, n;
	printf("Napiste cislo: ");
	scanf ("%d", &N);
	if (N<1 || N>15) {
		printf("Cislo nie je z daneho intervalu.");
		return; 
	}
	n = N;
	for (i=1; i<=N; i++) {
		printf("%d: ", i);
		for (j=n; j>0; j--) {
			printf("%d ", j);
		}
		n--;
		printf("\n");
	}
	return 0;
}
