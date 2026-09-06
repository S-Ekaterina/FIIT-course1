#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void v(FILE **f, char ***id, char ***nazov, char ***meno, char ***datum, int *j)
{
	int i, b = 0, a;
	char lin[12], lik[150], lip[300], lim[14];

	// zisti, ci txt subor uz bol otvoreny:
	if ((*f = fopen("KonferencnyZoznam.txt", "r")) == NULL)
	{
		fclose(*f);
	}
	*f = fopen("KonferencnyZoznam.txt", "r");
	// ak sa subor nepodari otvorit:
	if (*f == NULL)
	{
		printf("Neotvoreny subor\n");
		return;
	}
	else
	{

		// zisti, ci u� boli vytvoren� dynamick� polia:
		if (*id == NULL && *nazov == NULL && *meno == NULL && *datum == NULL)
		{

			// program vyp�e jednotliv� z�znamy zo s�boru:
			while (fgets(lin, 12, *f) != NULL)
			{
				printf("ID prispevku: ");
				printf("%s", lin);
				printf("Nazov prispevku: ");
				fgets(lik, 150, *f);
				printf("%s", lik);
				printf("Mena autorov: ");
				fgets(lip, 300, *f);
				printf("%s", lip);
				printf("Datum a cas prezentovania: ");
				fgets(lim, 14, *f);
				printf("%s\n", lim);
				fgets(lim, 14, *f);
			}
		}
		else
		{
			// vyp�e na obrazovku jednotliv� z�znamy z dynamick�ch pol�:
			a = *j;
			for (i = 0; i < *j; i++)
			{
				printf("ID prispevku: ");
				printf("%s", (*id)[i]);
				printf("Nazov prispevku: ");
				printf("%s", (*nazov)[i]);
				printf("Mena autorov: ");
				printf("%s", (*meno)[i]);
				printf("Datum a cas prezentovania: ");
				printf("%s\n", (*datum)[i]);
			}
		}
	}

	rewind(*f);
}

void p(char ***id, char ***nazov, char ***meno, char ***datum, int *j)
{
	int i, p = 0, a, b;
	char c;

	// Skontrolujte, ci bola aktivovan� funkcia n:
	if (*id == NULL && *nazov == NULL && *meno == NULL && *datum == NULL)
	{
		*j = 1;
		a = *j;

		// Vytvorenie pola pre 1 z�znam:
		*id = (char **)malloc(a * sizeof(char *));
		*nazov = (char **)malloc(a * sizeof(char *));
		*meno = (char **)malloc(a * sizeof(char *));
		*datum = (char **)malloc(a * sizeof(char *));
		for (i = 0; i < a; i++)
		{
			(*id)[i] = (char *)malloc(11 * sizeof(char));
			(*nazov)[i] = (char *)malloc(150 * sizeof(char));
			(*meno)[i] = (char *)malloc(300 * sizeof(char));
			(*datum)[i] = (char *)malloc(12 * sizeof(char));
		}
	}
	else{return;}

	// nacita vsetky udaje z klavesnice a prida zaznam do dynamickych poli:
	for (i = 0; i < 2; i++)
	{
		scanf(" %c", &(*id)[0][i]);
	}
	if ((*id)[0][0] == 'P' && ((*id)[0][1] == 'D' || (*id)[0][1] == 'P'))
	{
		p += 0;
	}
	else if ((*id)[0][0] == 'U' && ((*id)[0][1] == 'D' || (*id)[0][1] == 'P'))
	{
		p += 0;
	}
	else
	{
		p++;
	}
	for (i = 2; i < 10; i++)
	{
		scanf(" %c", &(*id)[0][i]);
		if ((*id)[0][i] >= '0' && (*id)[0][i] <= '9')
		{
			p += 0;
		}
		else
		{
			p++;
		}
	}
	(*id)[0][10] = '\n';
	scanf(" %c", &c);
	fgets(*nazov[0], 150, stdin);
	fgets(*meno[0], 300, stdin);
	for (i = 0; i < 12; i++) {
		scanf(" %c", &(*datum)[0][i]);
		if ((*datum)[0][i] >= '0' && (*datum)[0][i] <= '9') {
			p += 0;
		}
		else {p++;}
	}

	// program vyp�e hl�ku:
	if (p == 0)
	{
		printf("Zaznam sa podarilo pridat.\n");
	}
	else
	{
		printf("Zaznam sa nepodarilo pridat.\n");
	}
}

void n(FILE **f, char ***id, char ***nazov, char ***meno, char ***datum, int *j)
{
	char lis[300];
	int i, b = 0, g = 0, a = 0;
	char c;

	// Ak subor nie je otvoreny, tato volba nic nezmeni a vypise spravu:
	if (*f == NULL)
	{
		printf("Neotvoreny subor\n");
		return;
	}

	// spocita pocet zaznamov v *.txt subore:
	while (fgets(lis, sizeof(lis), *f) != NULL)
	{
		a++;
	}
	a = (a + 1) / 5;

	// Ak uz boli polia predtym vytvorene, su najprv dealokovane a potom sa vytvoria nove:
	if (*id != NULL && *nazov != NULL && *meno != NULL && *datum != NULL)
	{
		a = *j;
		for (i = 0; i < a; i++)
		{
			free((*id)[i]);
			free((*nazov)[i]);
			free((*meno)[i]);
			free((*datum)[i]);
		}
		free(*id);
		free(*nazov);
		free(*meno);
		free(*datum);
	}
	rewind(*f);

	// Zapise ich v takom poradi, v akom su v textovom subore:
	*id = (char **)malloc(a * sizeof(char *));
	*nazov = (char **)malloc(a * sizeof(char *));
	*meno = (char **)malloc(a * sizeof(char *));
	*datum = (char **)malloc(a * sizeof(char *));
	for (i = 0; i < a; i++)
	{
		(*id)[i] = (char *)malloc(12 * sizeof(char));
		(*nazov)[i] = (char *)malloc(150 * sizeof(char));
		(*meno)[i] = (char *)malloc(300 * sizeof(char));
		(*datum)[i] = (char *)malloc(14 * sizeof(char));
	}
	i = 0;
	while (fgets((*id)[i], 12, *f) != NULL && i < a)
	{
		fgets((*nazov)[i], 150, *f);
		fgets((*meno)[i], 300, *f);
		fgets((*datum)[i], 14, *f);
		fgets(lis, 12, *f);
		i++;
	}

	// Po uspesnom nacitani hodnot sa vypise hlaska:
	printf("Nacitane data\n");
	*j = a;
}

void s(char ***id, char ***nazov, char ***meno, char ***datum, int *j)
{

	// Ak dynamick� polia nie s� vytvoren�, vyp�e spr�vu:
	if (*id == NULL && *nazov == NULL && *meno == NULL && *datum == NULL)
	{
		printf("Polia nie su vytvorene. \n");
		return;
	}
	int i, a, b, k = 0;
	char c;
	int v[40], p[40];
	char isk[8], up[2];
	for (i = 0; i < 40; i++)
	{
		v[i] = 0;
		p[i] = 0;
	}
	char *slovo = NULL;
	a = *j;

	// po aktivovan� program nac�ta d�tum a typ prezentovania:
	scanf("%8s %2s", isk, up);
	for (i = 0; i < a; i++)
	{
		slovo = strstr((*datum)[i], isk);
		if (slovo != NULL)
		{
			v[i] = i + 1;
		}
	}
	for (i = 0; i < a; i++)
	{
		slovo = strstr((*id)[i], up);
		if (slovo != NULL)
		{
			p[i] = i + 1;
		}
	}

	// program vyp�e zoznam pr�spevkov prezentovan�ch v dan� den a dan�ho typu:
	for (i = 0; i < a; i++)
	{
		if (v[i] == p[i])
		{
			k++;
			for (b = 8; b < 12; b++)
			{
				printf("%c", (*datum)[i][b]);
			}
			printf("        ");
			for (b = 0; b < 150; b++)
			{
				c = (*meno)[i][b];
				if (c == '#')
				{
					break;
				}
				printf("%c", (*meno)[i][b]);
			}
			printf("         %s", (*nazov)[i]);
		}
	}

	// Ak pre dan� vstup neexistuje �iadny z�znam, vyp�e sa spr�va:
	if (k == 0)
	{
		printf("Pre dany vstup neexistuju zaznamy.\n");
	}
}

void w(char ***meno, int *j, char ***MENA, int *k)
{
	int b, i, a, d = 0, p = 0, g = 0, x;
	int m[40], h[40];
	char c;
	a = *j;

	// Ak tak�to pole os�b u� existovalo, tak pred alok�ciou nov�ho pola bude p�vodn� pole os�b uvolnen�:
	if (*MENA != NULL)
	{
		b = *k;
		for (i = 0; i < b; i++)
		{
			free((*MENA)[i]);
		}
		free(*MENA);
		*k = 0;
		*MENA = NULL;
	}

	// Ak dynamick� polia nie s� vytvoren�, vyp�e spr�vu:
	if (*meno == NULL)
	{
		printf("Polia nie su vytvorene. \n");
		return;
	}
	for (i = 0; i < a; i++)
	{
		h[i] = strlen((*meno)[i]);
		for (b = 0; b < h[i]; b++)
		{
			c = (*meno)[i][b];
			g++;
			if (c == '#')
			{
				m[p] = ++g;
				g = 0;
				b += 2;
				p++;
			}
		}
	}
	d = p;

	// Funkcia mus� vr�tit aj pocet retazcov v novom dynamickom poli:
	*k = d;

	// funkcia vytvor� nov� dynamick� pole:
	*MENA = (char **)malloc(d * sizeof(char *));
	for (i = 0; i < d; i++)
	{
		(*MENA)[i] = (char *)malloc(m[i] * sizeof(char));
	}
	g = 0;
	p = 0;
	for (i = 0; i < a; i++)
	{
		x = h[i];
		for (b = 0; b < x; b++)
		{
			c = (*meno)[i][b];
			if (c == '#')
			{
				p++;
				b += 2;
				g = 0;
				continue;
			}
			if (c == '\0' || c == '\n')
			{
				continue;
			}

			// Meno ka�dej osoby v novom poli bude skonvertovan� na velk� p�smen�:
			if (c >= 'a' && c <= 'z')
			{
				c -= 32;
			}
			(*MENA)[p][g] = c;
			g++;
		}
	}

	// zoznam os�b sa vyp�e na obrazovku pod seba:
	for (i = 0; i < d; i++)
	{
		x = m[i] - 2;
		for (b = 0; b < x; b++)
		{
			printf("%c", (*MENA)[i][b]);
		}
		printf("\n");
	}
}

void h(char ***id, char ***datum, int *j)
{

	// Ak dynamick� polia nie s� vytvoren�, vyp�e spr�vu:
	if (*id == NULL && *datum == NULL)
	{
		printf("Polia nie su vytvorene. \n");
		return;
	}
	int i, a, b, p;
	int o[6][4];
	for (i = 0; i < 6; i++)
	{
		for (b = 0; b < 4; b++)
		{
			o[i][b] = 0;
		}
	}
	a = *j;
	for (i = 0; i < a; i++)
	{
		if ((*id)[i][0] == 'U' && (*id)[i][1] == 'P')
		{
			p = 0;
		}
		else if ((*id)[i][0] == 'U' && (*id)[i][1] == 'D')
		{
			p = 1;
		}
		else if ((*id)[i][0] == 'P' && (*id)[i][1] == 'P')
		{
			p = 2;
		}
		else if ((*id)[i][0] == 'P' && (*id)[i][1] == 'D')
		{
			p = 3;
		}
		if ((*datum)[i][8] == '0')
		{
			o[0][p]++;
		}
		if ((*datum)[i][8] == '1')
		{
			if ((*datum)[i][9] == '0' || (*datum)[i][9] == '1')
			{
				o[1][p]++;
			}
			if ((*datum)[i][9] == '2' || (*datum)[i][9] == '3')
			{
				o[2][p]++;
			}
			if ((*datum)[i][9] == '4' || (*datum)[i][9] == '5')
			{
				o[3][p]++;
			}
			if ((*datum)[i][9] == '6' || (*datum)[i][9] == '7')
			{
				o[4][p]++;
			}
		}
		if ((*datum)[i][8] == '2')
		{
			o[5][p]++;
		}
	}

	// po aktivovan� program vyp�e histogram pre typ prezentovania a hodinu v 2-hodinovom intervale:
	printf("  hodina           UP  UD  PP  PD\n");
	printf("08:00-09:59:       %d   %d   %d   %d\n", o[0][0], o[0][1], o[0][2], o[0][3]);
	printf("10:00-11:59:       %d   %d   %d   %d\n", o[1][0], o[1][1], o[1][2], o[1][3]);
	printf("12:00-13:59:       %d   %d   %d   %d\n", o[2][0], o[2][1], o[2][2], o[2][3]);
	printf("14:00-15:59:       %d   %d   %d   %d\n", o[3][0], o[3][1], o[3][2], o[3][3]);
	printf("16:00-17:59:       %d   %d   %d   %d\n", o[4][0], o[4][1], o[4][2], o[4][3]);
	printf("18:00-19:59:       %d   %d   %d   %d\n", o[5][0], o[5][1], o[5][2], o[5][3]);
}

void z(char ***id, char ***nazov, char ***meno, char ***datum)
{

	// Ak dynamick� polia nie s� vytvoren�, vyp�e spr�vu:
	if (*id == NULL && *nazov == NULL && *meno == NULL && *datum == NULL)
	{
		printf("Polia nie su vytvorene. \n");
		return;
	}
}

void d(char ***id, char ***nazov, char ***meno, char ***datum, int *j)
{
	int i, a;

	// Ak dynamick� polia nie s� vytvoren�, vyp�e spr�vu:
	if (*id == NULL && *nazov == NULL && *meno == NULL && *datum == NULL)
	{
		printf("Polia nie su vytvorene. \n");
		return;
	}

	// po aktivovan� sa korektne dealokuj� dynamick� polia pre zaznamy nac�tane prostredn�ctvom volby n:
	if (*id != NULL && *nazov != NULL && *meno != NULL && *datum != NULL)
	{
		a = *j;
		for (i = 0; i < a; i++)
		{
			free((*id)[i]);
			free((*nazov)[i]);
			free((*meno)[i]);
			free((*datum)[i]);
		}
		free(*id);
		free(*nazov);
		free(*meno);
		free(*datum);
	}
	*id = NULL;
	*nazov = NULL;
	*meno = NULL;
	*datum = NULL;
	*j = 0;
}

int main()
{
	char c;
	int b = 0, i;
	int a = 0;
	FILE *f = NULL;
	char **id = NULL, **nazov = NULL, **meno = NULL, **datum = NULL;
	char **MENA = NULL;
	printf("Napiste simbol: \n");
	scanf("%c", &c);
	while (c != 'k')
	{
		if (c == 'v') 
			{v(&f, &id, &nazov, &meno, &datum, &a);}
		else if (c == 'p') 
			{p(&id, &nazov, &meno, &datum, &a);}
		else if (c == 'n')
			{n(&f, &id, &nazov, &meno, &datum, &a);}
		else if (c == 's')
			{s(&id, &nazov, &meno, &datum, &a);}
		else if (c == 'w')
			{w(&meno, &a, &MENA, &b);}
		else if (c == 'h')
			{h(&id, &datum, &a);}
		else if (c == 'z')
			{z(&id, &nazov, &meno, &datum);}
		else if (c == 'd')
			{d(&id, &nazov, &meno, &datum, &a);}
		scanf("%c", &c);
	}

	// ak je vstupn� s�bor otvoren�, tak bude uzavret�:
	if (f != NULL)
	{
		fclose(f);
	}

	// po aktivovan� sa korektne dealokuj� v�etky dynamick� polia, ak boli predt�m vytvoren�:
	if (id != NULL || nazov != NULL || meno != NULL || datum != NULL)
	{
		for (i = 0; i < a; i++)
		{
			free(id[i]);
			free(nazov[i]);
			free(meno[i]);
			free(datum[i]);
		}
		free(id);
		free(nazov);
		free(meno);
		free(datum);
	}
	if (MENA != NULL)
	{
		for (i = 0; i < b; i++)
		{
			free(MENA[i]);
		}
		free(MENA);
	}
	return 0;
}
