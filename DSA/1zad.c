#include <stdlib.h>
#include <stdio.h>

int NOD (unsigned long long int a, unsigned long long int b) {
    while (b != 0) {
        unsigned long long int c = b;
        b = a % b;
        a = c;
    }
    return a;
}

int main(){
	int i, j, N, g=0;
    unsigned long long int a, b;
	scanf ("%d", &N);
	if (N < 1 || N > 100000) {
		return 1;
	}
	int vyvod[N];
	for (i=0; i<N; i++) {
		scanf ("%llu %llu", &a, &b);
		if (a < 0 || b < 0) {
			return 1;
		}
		vyvod[g] = NOD(a, b);
		g++;
	}
	for (i=0; i<N-1; i++) {
		printf ("%llu\n", vyvod[i]);
	}
    printf ("%llu", vyvod[i]);
    return 0;
}
