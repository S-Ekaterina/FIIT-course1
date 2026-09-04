#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	int i, j, pocet=0, g, a=0, b;
	char arr[100];
	FILE *f;
	printf ("Napiste nazov suboru: ");
	scanf ("%s", &arr);
	if ((f = fopen(arr, "r")) == NULL) {
		printf("Subor sa nepodarilo otvorit.\n");
		fclose(f);
		return 1;
	}
	printf ("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z\n");
	while (fgets(arr, 100, f) != NULL) {
		a++;
	}
	rewind(f);
	for (b=0; b<a; b++) {
		fgets(arr, 100, f);
		g = strlen(arr);
		for (i=0; i<26; i++) {
			for (j=0; j<g; j++) {
				if (arr[j] == ('A'+i) || arr[j] == ('a'+i)) {
					pocet++;
				}
			}
			printf ("%d ", pocet);
			pocet = 0;
		}
		printf ("\n");
	}
	
	fclose(f);
	return 0;
}
