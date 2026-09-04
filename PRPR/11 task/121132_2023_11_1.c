#include <stdio.h>
#include <stdlib.h>

#define LADENIE_ZAKLADNE 0
#define LADENIE_PODROBNE 1

#ifndef DEBUG_MODE
#define DEBUG_MODE LADENIE_ZAKLADNE
#endif

double sucet = 0.0;

void start(const char* string) {
    if (DEBUG_MODE == LADENIE_PODROBNE) {
        printf("Subor otvoreny\n");
    }
    printf("%s\n", string);
}

void end(const char* string) {
    if (DEBUG_MODE == LADENIE_PODROBNE) {
    	printf("Subor zatvoreny\n");
	}
    printf("%s\n", string);
}

int main() {
    FILE *f;
    double a, sum;

    start ("Otvorenie suboru");
    f = fopen("suma.txt", "r");
    if (f == NULL) { exit(1); }
    start ("Kontrola sumy");
    if (fscanf(f, "%lf", &sum) != 1) { exit(1); }

    while (fscanf(f, "%lf", &a) == 1) {
        sucet += a;
        if (DEBUG_MODE == LADENIE_PODROBNE) {
        	printf("Sucet: %g\n", sucet);
		}
    }
    if (sucet == sum) { printf("Suma je spravna.\n"); }
	else { printf("Suma je nespravna.\n"); }
    end ("Zatvaranie suboru");
    fclose(f);
    return 0;
}
