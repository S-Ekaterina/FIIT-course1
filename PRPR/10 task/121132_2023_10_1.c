#include<stdio.h>
#include<string.h>
#include <stdlib.h>

struct Zaznam {
    char nazov[100];
    char vyrobca[100];
    int pocetKusov;
    double cena;
    struct Zaznam* dalsi;
};

int main() {
	struct Zaznam* zaznam = NULL;
    char nazov[100];
    char vyrobca[100];
    int pocetKusov;
    double cena;
    
    printf ("Pridajte tovar (koniec - 0):\n");
    
    while (1) {
    	printf ("Nazov: ");
    	scanf ("%s", nazov);
    	if (strcmp(nazov, "0") == 0) {
            break;
        }
    	printf ("Vyrobca: ");
    	scanf ("%s", vyrobca);
    	printf ("Pocet kusov: ");
    	scanf ("%d", &pocetKusov);
    	printf ("Cena: ");
    	scanf ("%lf", &cena);
    	
    	struct Zaznam* novyZaznam = (struct Zaznam*)malloc(sizeof(struct Zaznam));
	    if (novyZaznam == NULL) {
	        printf("Chyba pri alokacii pamate.\n");
	        return 1;
	    }
	    strncpy(novyZaznam->nazov, nazov, sizeof(novyZaznam->nazov));
	    strncpy(novyZaznam->vyrobca, vyrobca, sizeof(novyZaznam->vyrobca));
	    novyZaznam->pocetKusov = pocetKusov;
	    novyZaznam->cena = cena;
	    novyZaznam->dalsi = NULL;
	    struct Zaznam* aktualny = zaznam;
    	struct Zaznam* predchadzajuci = NULL;
    	
    	while (aktualny != NULL && strcmp(aktualny->nazov, novyZaznam->nazov) < 0) {
	        predchadzajuci = aktualny;
	        aktualny = aktualny->dalsi;
	    }
	    if (predchadzajuci == NULL) {
	        novyZaznam->dalsi = zaznam;
	        zaznam = novyZaznam;
	    }
		else {
	        predchadzajuci->dalsi = novyZaznam;
	        novyZaznam->dalsi = aktualny;
	    }
	}
	
	while (zaznam != NULL) {
        struct Zaznam* temp = zaznam;
        zaznam = zaznam->dalsi;
        free(temp);
    }
	return 0;
}
