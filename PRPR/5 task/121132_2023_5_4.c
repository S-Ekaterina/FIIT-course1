#include <stdio.h>

int vymen_ukazovatele (int **pa, int **pb) {
	int *x = *pa;
    *pa = *pb;
    *pb = x;
}

main () {
	int a, b;
	int *p_a = &a, *p_b = &b;
	printf ("Napiste 2 cisla: ");
	scanf ("%d %d", &a, &b);
	printf ("p_a: %p %d\n", (void*)p_a, *p_a);
	printf ("p_b: %p %d\n", (void*)p_b, *p_b);
	vymen_ukazovatele(&p_a, &p_b);
	printf ("p_a: %p %d\n", (void*)p_a, *p_a);
	printf ("p_b: %p %d\n", (void*)p_b, *p_b);
	return 0;
}
