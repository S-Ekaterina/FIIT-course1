#include <stdio.h>

int maximum (int *a, int *b) {
	if (*a<*b) {
		return *b;
	}
	else {
		return *a;
	}
}

main () {
	int a, b;
	printf ("Napiste 2 cisla: ");
	scanf ("%d %d", &a, &b);
	printf ("Cislo %d je vacsie.", maximum(&a, &b));
	return 0;
}
