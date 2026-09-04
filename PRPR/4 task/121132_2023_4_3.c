#include <stdio.h>

long reverzne_cislo(long x) {
	long r = 0;
    while (x > 0) {
        r = r*10 + x%10;
        x /= 10;
    }
	return r;
}

main () {
	long x;
	printf ("Napiste cislo (end:0): ");
	scanf ("%ld", &x);
	while (x != 0) {
		printf ("%ld\n", reverzne_cislo(x));
		if (x == reverzne_cislo(x)) {
			printf ("Cislo %ld je palindrom\n", x);
		}
		else {printf ("Cislo %ld nie je palindrom\n", x);}
		printf ("Napiste cislo: ");
		scanf ("%ld", &x);
	}
	return 0;
}
