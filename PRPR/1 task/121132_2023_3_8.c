#include <stdio.h>

void nasobok(double x, int n) {
	double y=x;
	int i;
	for (i=1; i<=n; i++) {
		printf ("%.2lf * %d = %.2lf\n", x, i, y);
		y += x;
	}
}

main () {
	double x;
	int n, i;
	printf ("Napiste 2 cisla: ");
	scanf ("%lf %d", &x, &n);
	nasobok(x, n);
	return 0;
}
