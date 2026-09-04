#include <stdio.h>
#include <math.h>

int kvadraticka_rovnica (float a, float b, float c, float *x, float *y) {
	float D;
	D = b * b - 4 * a * c;
	if (D < 0) {
		return 0;}
	else if (D == 0) {
		*x = -b / (2*a);
		return 1;
	}
	else if (D > 0) {
		*x = (-b + sqrt(D)) / (2*a);
		*y = (-b - sqrt(D)) / (2*a);
		return 2;
	}
}

main () {
	float a, b, c, x=0, y=0;
	int n;
	printf ("Napiste cisla rovnice (ax^2+bx+c): ");
	scanf ("%f %f %f", &a, &b, &c);
	n = kvadraticka_rovnica(a, b, c, &x, &y);
	if (n == 0) {
		printf("Neexistuju ziadne riesenia.\n");
	}
	else if (n == 1 || n == 2) {
		printf ("Pocet korenov kvadratickej rovnice je: %d\n", n);
		printf("Prvy koren ma hodnotu: %f\n", x);
		printf("Druhy koren ma hodnotu: %f\n", y);
	}
	return 0;
}
