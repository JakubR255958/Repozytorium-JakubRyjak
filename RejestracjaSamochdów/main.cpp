#include <stdio.h>
#include <string.h>

#define MAX_SAMOCHODOW 20

typedef struct {

    char marka[15];

    int rok_produkcji;

    char nr_rejestracyjny[8];

    int przebieg;

} Samochod;

void dodaj_samochod(Samochod auta[], int *licznik) {

    if (*licznik >= MAX_SAMOCHODOW) {

        printf("Osiagnieto maksymalna liczbe samochodow.\n");

        return;
    }

    printf("Podaj marke: ");

    scanf("%s", auta[*licznik].marka);

    printf("Podaj rok produkcji: ");

    scanf("%d", &auta[*licznik].rok_produkcji);

    printf("Podaj nr rejestracyjny: ");

    scanf("%s", auta[*licznik].nr_rejestracyjny);

    printf("Podaj przebieg: ");

    scanf("%d", &auta[*licznik].przebieg);

    (*licznik)++;
}

void wyswietl_samochody(Samochod auta[], int licznik) {

    for (int i = 0; i < licznik; i++) {

        printf("Samochod %d:\n", i + 1);

        printf(" Marka: %s\n", auta[i].marka);

        printf(" Rok produkcji: %d\n", auta[i].rok_produkcji);

        printf(" Nr rejestracyjny: %s\n", auta[i].nr_rejestracyjny);

        printf(" Przebieg: %d km\n", auta[i].przebieg);
    }
}

void zapisz_do_pliku(Samochod auta[], int licznik) {

    FILE *plik = fopen("samochody.txt", "w");

    if (!plik) {

        printf("Blad zapisu do pliku.\n");

        return;
    }

    for (int i = 0; i < licznik; i++) {

        fprintf(plik, "%s %d %s %d\n", auta[i].marka, auta[i].rok_produkcji, auta[i].nr_rejestracyjny, auta[i].przebieg);

    }

    fclose(plik);

    printf("Dane zapisano do pliku.\n");
}

void wczytaj_z_pliku(Samochod auta[], int *licznik) {

    FILE *plik = fopen("samochody.txt", "r");

    if (!plik) {

        printf("Brak pliku do wczytania.\n");

        return;
    }

    *licznik = 0;

    while (fscanf(plik, "%s %d %s %d", auta[*licznik].marka, &auta[*licznik].rok_produkcji, auta[*licznik].nr_rejestracyjny, &auta[*licznik].przebieg) == 4) {

        (*licznik)++;

        if (*licznik >= MAX_SAMOCHODOW) break;

    }



    fclose(plik);

    printf("Dane wczytano z pliku.\n");

}

int main() {
    Samochod auta[MAX_SAMOCHODOW];

    int licznik = 0;

    int wybor;

    do {

        printf("\n1. Dodaj samochod\n");

        printf("2. Wyswietl samochody\n");

        printf("3. Zapisz do pliku\n");

        printf("4. Wczytaj z pliku\n");

        printf("0. Wyjscie\n");

        printf("Wybor: ");

        scanf("%d", &wybor);



        switch (wybor) {

            case 1: dodaj_samochod(auta, &licznik);
                break;

            case 2: wyswietl_samochody(auta, licznik);
                break;

            case 3: zapisz_do_pliku(auta, licznik);
                break;

            case 4: wczytaj_z_pliku(auta, &licznik);
                break;

            case 0: printf("Koniec programu.\n");
                break;

            default: printf("Nieprawidlowy wybor.\n");
        }

    } while (wybor != 0);



    return 0;

}