#include <stdio.h>

main () {
	int i;
	float x;
	FILE *fp;
	if ((fp = fopen("nasobky.txt", "w")) == NULL) {
		printf("Nepodarilo sa otvorit subor");
		return 1;
	}
	printf ("Napiste cislo: ");
	scanf ("%f", &x);
	for (i=1; i<11; i++) {
		fprintf(fp, "%2d * %.2f = %.2f\n", i, x, i*x);
	}
	printf("Subor bol upraveny");
	fclose(fp);
	return 0;
}
