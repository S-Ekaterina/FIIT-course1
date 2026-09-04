#include <stdio.h>
#include <stdlib.h>

int magicky(int arr[20][20], int n) {
	int a=0, b=1, i=0, j=0, k[n*n], rez=0;
	for (i=0; i<n*n; i++) {
		k[i] = 0;
	}
	for (i=0; i<n; i++) {
		for (j=0; j<n; j++) {
			k[a] += arr[i][j];
			k[b] += arr[j][i];
		}
		a += 2;
		b += 2;
	}
	for (i=0; i<n; i++) {
		k[a] += arr[i][i];
		k[b] += arr[n-i-1][n-i-1];
	}
	for (i=0; i<a+2; i++) {
		if (k[0] != k[i]) {
			rez++;
		}
	}
	if (rez == 0) {return 1;}
	else {return 0;}
}

int main () {
	int n=0, N=20, i=0, j=0;
	int arr[N][N];
	printf ("Napiste cislo: ");
	scanf ("%d", &n);
	if (n<=0 || n>N) {
		printf ("Chyba\n");
	}
	else {
		for (i=0; i<n; i++) {
			for (j=0; j<n; j++) {
				scanf ("%d", &arr[i][j]);
			}
		}
		if (magicky(arr, n) == 1) {
			printf ("Stvorec je magicky\n");
		}
		else {
			printf ("Stvorec nie je magicky\n");
		}
	}
	return 0;
}
