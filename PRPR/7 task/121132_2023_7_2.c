#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i, j;
    printf("Napiste cislo: ");
    scanf("%d", &N);
    while (N > 0) {
    	char arr[N][N];
    	char c = 'a';
        for (i=0; i<N; i++) {
	        if (i%2 == 0) {
	            for (j=0; j<N; j++) {
	                arr[i][j] = c;
	                c++;
	                if (c > 'z') {
	                    c = 'a';
	                }
	            }
	        } 
			else {
	            for (j=N-1; j>=0; j--) {
	                arr[i][j] = c;
	                c++;
	                if (c > 'z') {
	                    c = 'a';
	                }
	            }
	        }
	    }
	    for (i=0; i<N; i++) {
	        for (j=0; j<N; j++) {
	            printf("%c ", arr[i][j]);
	        }
	        printf("\n");
	    }
	    scanf("%d", &N);
    }
    return 0;
}
