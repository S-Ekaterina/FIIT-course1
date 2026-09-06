#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int chyby (char* arr) {
	int chyba=0, i, j=-1;
	char prov[strlen(arr)];
	for (i=0; i<strlen(arr); i++) {
		char c = arr[i];
		if (c == '(' || c == '[' || c == '<' || c == '{') {
			prov[++j] = c;
		} else {
			if (j == -1) {
				chyba++;
			} else {
				char p = prov[j--];
				if ((p == '(' && c != ')') || (p == '[' && c != ']') || (p == '<' && c != '>') || (p == '{' && c != '}')) {
					chyba++;
				}
			}
		}
	}
	chyba += j + 1;
	return chyba;
}

int main() {
	int N, i;
	scanf ("%d", &N);
	if (N<1 || N>200) {
		return 1;
	}
	int error[N];
	char* s = malloc(100000);
	for (i=0; i<N; i++) {
		scanf ("%s", s);
		error[i] = chyby(s);
		
	}
	printf ("%d", error[0]);
	for (i=1; i<N; i++)  {
		printf ("\n%d", error[i]);
	}
    free(s);
	return 0;
}
