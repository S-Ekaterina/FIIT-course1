#include <stdio.h>

main () {
	int f, g, i;
	scanf ("%d %d", &f, &g);
	for (i=f; i<=g; i++) {
		if (i%3==0) {
			printf ("%d ", i);
		}
	}
	return 0;
}
