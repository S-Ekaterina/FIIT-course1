#include <stdio.h>

main () {
	int i=0, a=0, b=0, h;
	char c, d;
	FILE *fp, *f;
	if ((fp = fopen("prvy.txt", "r")) == NULL || (f = fopen("druhy.txt", "r")) == NULL) {
		printf("Neexistuje subor");
		return 1;
	}
	while ((c = fgetc(fp)) != EOF && (d = fgetc(f)) != EOF) {
		if (c != d) {
			i++;
		}
		a++;
		b++;
	}
	if (i == 0) {
		printf ("Subory su identicke\n");
	}
	else {
		printf ("Pocet roznych znakov: %d\n", i);
		while ((c = fgetc(fp)) != EOF) {
	        a++;
	    }
	    while ((d = fgetc(f)) != EOF) {
	        b++;
	    }
		if (a>b) {h = a-b;}
		else {h = b-a;}
		printf ("Jeden zo suborov je dlhsi o %d znakov\n", h);
	}
	
	fclose(fp);
	fclose(f);
	return 0;
}
