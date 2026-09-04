#include <stdio.h>

main () {
	char c;
	char i[100];
	FILE *fp, *f;
	if ((fp = fopen("znak.txt", "r")) == NULL) {
		printf("Neexistuje subor: znak.txt.");
		return 1;
	}
	printf ("Napiste znak: ");
	scanf (" %c", &c);
	if (c == 's') {
		if ((f = fopen("novy.txt", "w")) == NULL) {
			printf("Neexistuje subor: novy.txt.");
			return 1;
		}
		while (fgets(i, 100, fp) != NULL) {
			fputs(i, f);
		}
		fclose(f);
	}
	else {
		while (fgets(i, 100, fp) != NULL) {
			printf("%s", i);
		}
	}
	fclose(fp);
	return 0;
}
