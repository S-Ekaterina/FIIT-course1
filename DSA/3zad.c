#include <stdlib.h>
#include <stdio.h>

int binarn(int y, long int a[], long int b, long int aa[], long int bb) { // N-1, aBefore, bBefore, aAfter, bAfter
	int x = 0, rezult = x + (y - x) / 2;
	while (x <= y) {
        if (a[rezult] == b && aa[rezult] == bb) {
            return rezult+1;
        }
        else if (a[rezult] == b && aa[rezult] != bb) {
        	if (a[rezult+1] == b && aa[rezult+1] == bb) {
        		return rezult+2;
			}
			else if (a[rezult-1] == b && aa[rezult-1] == bb) {
        		return rezult;
			}
		}
		else if (a[rezult] < b || (a[rezult] == b && aa[rezult] < bb)) {
            x = rezult + 1;
        } 
		else {
            y = rezult - 1;
        }
        rezult = x + (y - x) / 2;
        //printf ("  %d  ", rezult);
    }
    return -1;
}

int main(){
	int N, M, i, j=0, g;
	char c;
	scanf ("%d", &N);
	if (N<1 || N>50000) {
		return 1;
	}
	long int *aBefore = malloc(N * sizeof(long int));
    long int *aAfter = malloc(N * sizeof(long int));
	for (i=0; i<N; i++) {
		scanf ("%ld%c", &aBefore[i], &c);
		if(c == '.' || c == ',') {
			scanf ("%ld", &aAfter[i]);
		}
		else {
			aAfter[i] = 0;
			continue;
		}
		if (aAfter[i] == 0) {
			continue;
		}
		while (aAfter[i] % 10 == 0) {
			aAfter[i] /= 10;
		}
	}
	scanf ("%d", &M);
	if (M<1 || M>100000) {
		return 1;
	}
	long int bBefore, bAfter;
	int *vyvod = malloc(M * sizeof(int));
	for (i=0; i<M; i++) {
		scanf ("%ld%c", &bBefore, &c);
		if(c == '.' || c == ',') {
			scanf ("%ld", &bAfter);
		}
		else {
			bAfter = 0;
		}
		while (bAfter % 10 == 0 && bAfter != 0) {
			bAfter /= 10;
		}
		g = binarn(N-1, aBefore, bBefore, aAfter, bAfter);
        if (g != -1) {
            vyvod[j++] = g;
        } 
		else {
            vyvod[j++] = 0;
        }
	}
	//printf ("\n");
	printf ("%d", vyvod[0]);
	for (i=1; i<M; i++) {
		printf ("\n%d", vyvod[i]);
	}
	free(aBefore);
    free(aAfter);
    free(vyvod);
	return 0;
}
