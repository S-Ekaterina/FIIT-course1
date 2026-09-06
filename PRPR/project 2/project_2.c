#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mena {
	char Meno[100];
	char Priezvisko[100];
	char Rola[1];
};

struct Zoznam {
	char id[12];
	char nazov[150];
	int meno;
	struct mena mena;
	char datum[14];
	struct Zoznam *next;
};

void n(FILE **f, struct Zoznam **zoznam, int *j) {
	char lis[300];
	char c;
	int i, a, b, p, g;
	if ((*f = fopen("KonferencnyZoznam2.txt", "r")) == NULL) {
		fclose(*f);}
	*f = fopen("KonferencnyZoznam2.txt", "r");
	
	// Ak nie je možné súbor otvorit:
	if (*f == NULL) {
		printf("Zaznamy neboli nacitane!\n");
		return;
	}
	else {
		a=0;
		i=0;
		g=0;
		rewind(*f);
		
		// Spocita pocet zaznamov v *.txt subore:
		while (fgets(lis, 300, *f) != NULL) {a++;}
		a = (a + 1) / 5;
		
		// Ak zoznam predtym existoval, je potrebne uvolnit pamat:
		if (*zoznam != NULL) {
			free(*zoznam);
			*zoznam = NULL;
		}
	    *zoznam = (struct Zoznam *) malloc(a * sizeof(struct Zoznam));
        if (*zoznam == NULL) {
            printf("Chyba pri alokacii pamate!\n");
            return;
        }
        rewind(*f);
        struct Zoznam *pered = NULL;
        struct Zoznam *teraz = NULL;
        while (fgets(lis, 300, *f) != NULL && i < a) {
            teraz = &(*zoznam)[i];
            fgets(teraz->id, 12, *f);
            fgets(teraz->nazov, 150, *f);
            fgets(lis, 300, *f);
			(*zoznam)[i].meno = 0;
			for (b=0; b<300; b++) {
				if (lis[b] == '\n') {
					break;
				}
				else if (lis[b] == '#') {
					(*zoznam)[i].meno++;
				}
			}
			(*zoznam)[i].meno /= 2;
			p = (*zoznam)[i].meno + g;
			char *token = strtok(lis, " ");
			for (b=g; b<p; b++)	{
	            strcpy((*zoznam)[b].mena.Meno, token);
	            token = strtok(NULL, "#");
	            strcpy((*zoznam)[b].mena.Priezvisko, token);
	            token = strtok(NULL, "#");
	            strcpy((*zoznam)[b].mena.Rola, token);
	            token = strtok(NULL, " ");
			}
			g=b;
            fgets(teraz->datum, 14, *f);
            teraz->next = NULL;
            if (pered == NULL) {
                *zoznam = teraz;
            }
            else {
                pered->next = teraz;
            }
            pered = teraz;
            i++;
        }
        
        // Ak sa podarilo záznamy nacítat, vypíše správu:
        printf ("Nacitalo sa %d zaznamov\n", a);
        *j=a;
    }
}

void v(struct Zoznam **zoznam, int *j) {
	int i, a, b=0, p, g=0, t=0;
	a=*j;
	
	// Ak zoznam neobsahuje žiadne záznamy:
	struct Zoznam *teraz = *zoznam;
    if (teraz == NULL) {
        printf("Prazdny zoznam zaznamov.\n");
        return;
    }
    
    // Príkaz na výpis celého spájaného zoznamu záznamov:
    for (i = 0; i < a && teraz != NULL; i++) {
        printf("%d.\n", i + 1);
        printf("ID prispevku: %s", teraz->id);
        printf("Nazov prispevku: %s", teraz->nazov);
        printf("Mena autorov:\n");
        p = (*zoznam)[i].meno + g;
		for (b=g; b<p; b++)	{
			printf ("    %d:", ++t);
			printf(" %s", (*zoznam)[b].mena.Meno);
			printf(" %s", (*zoznam)[b].mena.Priezvisko);
			printf(" (%c)\n", (*zoznam)[b].mena.Rola[0]);
		}
		g=b;
		t=0;
        printf("Datum a Cas: ");
        for (b = 0; b < 4; b++) { printf("%c", teraz->datum[b]); }
        printf(".");
        for (b = 4; b < 6; b++) { printf("%c", teraz->datum[b]); }
        printf(".");
        for (b = 6; b < 8; b++) { printf("%c", teraz->datum[b]); }
        printf(" ");
        for (b = 8; b < 10; b++) { printf("%c", teraz->datum[b]); }
        printf(":");
        for (b = 10; b < 12; b++) { printf("%c", teraz->datum[b]); }
        printf("\n");
        teraz = teraz->next;
    }
}

void p (struct Zoznam **zoznam, int *j) {
	int i, a, h, u=0, b=0, g=0, p=0;
	int ip;
	char lis[300];
	char c;
	
	if (*zoznam != NULL) {
		
		// Príkaz je v dalšom riadku nasledovaný celým císlom:
		printf ("Napiste cislo:\n");
	    scanf ("%d", &h);
	    while (h<0) {
	    	printf ("Napiste kladne cislo:\n");
	    	scanf ("%d", &h);
		}
		a=*j+2;
		*zoznam = (struct Zoznam*) realloc(*zoznam, a * sizeof(struct Zoznam));
		(*zoznam)->next = (struct Zoznam*) malloc(sizeof(struct Zoznam));
		if (*zoznam == NULL) {
		    printf("Chyba pri realokacii pamate!\n");
		    return;
		}
		
		// Ak pozícia c1 v zozname neexistuje, záznam sa pridá na koniec zoznamu:
		if (h>(a-1)) {
			ip = a-1;
			printf ("%d\n", ip);
		}
		else {return;}
	}
    else if (*zoznam == NULL) {
    	
    	// Funkcia p môže byt volaná aj pred funkciou n:
    	a=1;
        *zoznam = (struct Zoznam *) malloc(a * sizeof(struct Zoznam));
        if (*zoznam == NULL) {
            printf("Chyba pri alokacii pamate!\n");
            return;
        }
        ip = 0;
	}
	struct Zoznam *teraz = *zoznam;
	if (ip != 0) {
		for (i=0; i<4; i++) {
			teraz = teraz->next;
		}
	}
    // nacita vsetky udaje z klavesnice:
	for (i=0; i<2; i++) {
		scanf(" %c", &(teraz->id)[i]);
	}
	if ((teraz->id)[0] == 'P' && ((teraz->id)[1] == 'D' || (teraz->id)[1] == 'P')) {
		p += 0;
	}
	else if ((teraz->id)[0] == 'U' && ((teraz->id)[1] == 'D' || (teraz->id)[1] == 'P')) {
		p += 0;
	}
	else {p++;}
	for (i = 2; i < 10; i++) {
		scanf(" %c", &(teraz->id)[i]);
		if ((teraz->id)[i] >= '0' && (teraz->id)[i] <= '9') {
			p += 0;
		}
		else {p++;}
	}
	(teraz->id)[10] = '\n';
	scanf("%c", &c);
	scanf("%c", &c);
	fgets(teraz->nazov, 150, stdin);
	fgets(lis, 300, stdin);
	(*zoznam)[ip].meno = 0;
	for (b=0; b<300; b++) {
		if (lis[b] == '\n') {
			break;
		}
		else if (lis[b] == '#') {
			(*zoznam)[ip].meno++;
		}
	}
	(*zoznam)[ip].meno /= 2;
	for (i=0; i<(a-1); i++) {
		g += (*zoznam)[i].meno;
	}
	u = (*zoznam)[ip].meno + g;
	char *token = strtok(lis, " ");
	for (b=g; b<u; b++)	{
        strcpy((*zoznam)[b].mena.Meno, token);
        token = strtok(NULL, "#");
        strcpy((*zoznam)[b].mena.Priezvisko, token);
        token = strtok(NULL, "#");
        strcpy((*zoznam)[b].mena.Rola, token);
        token = strtok(NULL, " ");
	}
	for (i = 0; i < 12; i++) {
		scanf(" %c", &(teraz->datum)[i]);
		if ((teraz->datum)[i] >= '0' && (teraz->datum)[i] <= '9') {
			p += 0;
		}
		else {p++;}
	}
	if (p == 0) {
		*j +=1;}
	else {
		free(*zoznam);
		*zoznam = NULL;}
}

void r (struct Zoznam **zoznam, int *j) {
	int a, c, d;
	
	// Príkaz je v dalšom riadku nasledovaný dvoma celými císlami c1 > 0, c2 > 0:
	printf ("Napiste dva cisla: ");
	scanf ("%d %d", &c, &d);
	while (c <= 0 || d <= 0) {
		printf ("Napiste dva cisla: ");
		scanf ("%d %d", &c, &d);
	}
	c--;
	d--;
	a = *j;
	
	// Ak pozícia c1 alebo c2 v zozname neexistuje, nevykoná sa prehodenie záznamov:
	if (c > a || d > a) {
		return;
	}
    printf ("ok");
}

void a (struct Zoznam **zoznam, int *j) {
	int a, i, b, p=1, l;
	a = *j;
	char c, f, g;
	
	// Ak zoznam neobsahuje žiadne záznamy:
	struct Zoznam *teraz = *zoznam;
	if (teraz == NULL) {
        printf("Prazdny zoznam zaznamov.\n");
        return;
    }
    
    // Úloha nehovorí, ktoré id je potrebné zmenit, preto som pridala požiadavku pre používatela:
	printf ("Napiste, ktoru prispevku chcete zmenit: ");
	scanf ("%d", &b);
	while (b>a || b<=0) {
		printf ("Napiste, ktoru prispevku chcete zmenit: ");
		scanf ("%d", &b);
	}
	b--;
	printf ("Zadaj novy ID: ");
	for (i=0; i<b && teraz != NULL; i++) {
	    teraz = teraz->next;
	}
	f = (teraz->id)[0];
	g = (teraz->id)[1];
	while (p != 0) {
		p=0;
		
		// V dalšom riadku nasledovaný ID císlom (8 cifier) a novým typom prezentovania:
		for (i=2; i<10; i++) {
			scanf(" %c", &(teraz->id)[i]);
			if ((teraz->id)[i] >= '0' && (teraz->id)[i] <= '9') {
				p += 0;
			}
			else {p++;}
			l = l * 10 + ((teraz->id)[i] - '0');
		}
		
		// V prípade, že niektorý údaj v zadanom retazci nie je korektný:
		// Napr. ID cislo nie je delitelné 15:
		if (l % 15 != 0) {
			p++;
		}
		scanf("%c", &c);
		for (i=0; i<2; i++) {
			scanf(" %c", &(teraz->id)[i]);
		}
		
		// Alebo typ prezentovania nie je z množiny {PD, UD, PP, UP}:
		if ((teraz->id)[0] == 'P' && ((teraz->id)[1] == 'D' || (teraz->id)[1] == 'P')) {
			p += 0;
		}
		else if ((teraz->id)[0] == 'U' && ((teraz->id)[1] == 'D' || (teraz->id)[1] == 'P')) {
			p += 0;
		}
		else {p++;}
		
		// Výzva na zadanie nového retazca bude mat tvar:
		if (p != 0) {
			printf ("Zadane udaje nie su korektne, zadaj novy retazec: ");
		}
	}
	
	// Pri tomto príkaze program vypíše správu:
	printf ("Prispevok s nazvom ");
	c = (teraz->nazov)[0];
	i = 0;
	while (c != '\n') {
		printf ("%c", (teraz->nazov)[i]);
		i++;
		c = (teraz->nazov)[i];
	}
	printf (" sa bude prezentovat %c%c [%c%c]\n", (teraz->id)[0], (teraz->id)[1], f, g);
}

void z (struct Zoznam **zoznam, int *j) {
	// Ak zoznam neobsahuje žiadne záznamy:
	struct Zoznam *teraz = *zoznam;
	if (teraz == NULL) {
        printf("Prazdny zoznam zaznamov.\n");
        return;
    }
}

int main() {
	char c;
	int j=0;
	FILE *f = NULL;
	struct Zoznam **zoznam = NULL;
    printf("Napiste simbol: \n");
    scanf("%c", &c);
    while (c != 'k') {
    	if (c == 'v') {
    		v(&zoznam, &j);}
    	else if (c == 'n') {
			n(&f, &zoznam, &j);}	
		else if (c == 'p') {
			p(&zoznam, &j);}
		else if (c == 'r') {
			r(&zoznam, &j);}
		else if (c == 'a') {
			a(&zoznam, &j);}
		else if (c == 'z') {
			z(&zoznam, &j);}
		scanf("%c", &c);
	}
	// Ak je vstupny subor otvoreny, tak bude uzavrety:
	if (f != NULL) {
		fclose(f);
	}
	
	// Ak spájaný zoznam existoval, treba korektne uvolnit alokovanú pamät:
	if (zoznam != NULL) {
			free(zoznam);
			zoznam = NULL;
	}
    return 0;
}
