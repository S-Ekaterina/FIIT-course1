#include <stdio.h>
#include <stdlib.h>

unsigned int invert(unsigned int x, int i, int n) {
	unsigned int y = ((1u << n) - 1) << i;
    return x ^ y;
}

int main() {
	unsigned int x, y;
    int i=0, n=0;
    printf ("Napiste 3 cisla: ");
    scanf ("%u %d %d", &x, &i, &n);
    y = invert(x, i, n);
    printf ("%u\n", y);
    return 0;
}
