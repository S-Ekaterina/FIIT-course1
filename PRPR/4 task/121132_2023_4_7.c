#include <stdio.h>

main () {
	float x, y=0;
	FILE *fp;
	if ((fp = fopen("cisla.txt", "r")) == NULL) {
		printf("Neexistuje subor: cisla.txt.");
		return 1;
	}
	while (fscanf(fp, "%f", &x) != EOF) {
		printf("%g\n", x);
		y += x;
	}
	printf("Sucet cisel je: %g\n", y);
	fclose(fp);
	return 0;
}
