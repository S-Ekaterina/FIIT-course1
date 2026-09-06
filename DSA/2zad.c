#include <stdlib.h>
#include <stdio.h>

int main() {
    int a, b, c=0, i, j, m=0;
    scanf("%d %d", &a, &b);
    if (a < 0 || b < 0 || a > 1000000 || b > 1000000 || a>b) {
        return 1;
    }
    if (a%2 == 0 && a != 2) {
        a++;
    }
    if (a < 2) {
        a=2;
    }
    while (a <= b) {
        
        for (j = 2; j*j <= a; j++) {
            if (a % j == 0) {
                c++;
                break;
            }
        }
        if (c == 0) {
            m++;
            if (m == 1) {
                printf ("%d", a);
            }
            else {
                printf (", %d", a);
            }
        }
        c=0;
        a++;
    }
    return 0;
}
