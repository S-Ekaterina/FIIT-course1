#include <stdio.h>

float Nacitaj (float X, float Y, float *o, float *obsah) {
	*o = 2*(X+Y);
	*obsah = X*Y;
}

main () {
	float a, b, c, d;
	printf ("Napiste 2 cisla: ");
	scanf ("%f %f", &a, &b);
	Nacitaj(a, b, &c, &d);
	printf ("Obsah: %.3f\n", d);
	printf ("Obvod: %.3f\n", c);
	return 0;
}
