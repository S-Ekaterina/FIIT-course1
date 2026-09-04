#include <stdio.h>

main () {
	int i=0;
	char c;
	FILE *fp;
	if ((fp = fopen("text.txt", "r")) == NULL) {
		printf("Neexistuje subor: text.txt.");
		return 1;
	}
	while ((c = fgetc(fp)) != EOF) {
		if (c == 'x' || c == 'X') {
			printf("Precital som X\n");
		}
		else if (c == 'y' || c == 'Y') {
			printf("Precital som Y\n");
		}
		else if (c == '#' || c == '$' || c == '&') {
			printf("Precital som riadiaci znak\n");
		}
		else if (c == ' ') {
			i++;
		}
		else if (c == '*') {
			printf("Koniec\n");
			break;
		}
	}
	printf("Pocet precitanych medzier: %d\n", i);
	fclose(fp);
	return 0;
}
