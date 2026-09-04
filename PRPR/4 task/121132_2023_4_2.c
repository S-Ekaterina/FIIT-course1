#include <stdio.h>

double tyzdenna_mzda(double h_mzda, double hod) {
	return h_mzda*hod;
}

main () {
	int n, i;
	double mzda, hodin, sum=0;
	printf ("Napiste cislo: ");
	scanf ("%d", &n);
	for (i=0; i<n; i++) {
		scanf ("%lf %lf", &mzda, &hodin);
		printf ("Hod. mzda: %.2lf Euro/hod, ", mzda);
		printf ("hodin: %.2lf, ", hodin);
		printf ("spolu: %.2lf Euro\n",tyzdenna_mzda(mzda, hodin));
		sum += tyzdenna_mzda(mzda, hodin);
	}
	printf ("Celkova mzda: %.2lf\n", sum);
	return 0;
}
