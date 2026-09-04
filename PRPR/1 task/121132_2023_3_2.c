#include <stdio.h>

main () {
	int i, j=0;
	int arr[11];
	printf ("Napiste 11 cisel: ");
	scanf ("%d", &arr[0]);
	for (i=1; i<11; i++) {
		scanf ("%d", &arr[i]);
		if (arr[i] > 2*arr[i-1] || arr[i] < 0.5*arr[i-1]) {
			j++;
		}
	}
	if (arr[0] < 0 || arr[0] > 10) {
		j++;
	}
	if (j>0) {
		printf ("Postupnost nie je spravna");}
	else {
		printf ("Postupnost je spravna");}
	return 0;
}
