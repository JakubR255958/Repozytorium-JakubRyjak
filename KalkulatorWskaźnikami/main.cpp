#include <stdio.h>

int main() {
    float a, b;
    float *pa = &a;  // wskaźnik na a
    float *pb = &b;  // wskaźnik na b
    int wybor;

    printf("1. Dodawanie\n");
    printf("2. Odejmowanie\n");
    printf("3. Mnozenie\n");
    printf("4. Dzielenie\n");
    printf("0. Wyjscie\n");
    printf("Wybierz operacje: ");
    scanf("%d", &wybor);

    if (wybor >= 1 && wybor <= 4) {
        printf("Podaj pierwsza liczbe: ");
        scanf("%f", pa);
        printf("Podaj druga liczbe: ");
        scanf("%f", pb);

        if (wybor == 1) {
            printf("Wynik: %f\n", *pa + *pb);
        } else if (wybor == 2) {
            printf("Wynik: %f\n", *pa - *pb);
        } else if (wybor == 3) {
            printf("Wynik: %f\n", (*pa) * (*pb));
        } else if (wybor == 4) {
            if (*pb != 0)
                printf("Wynik: %f\n", (*pa) / (*pb));
            else
                printf("Blad: dzielenie przez zero!\n");
        }
    } else if (wybor == 0) {
        printf("Koniec programu.\n");
    } else {
        printf("Nieprawidlowy wybor.\n");
    }

    return 0;
}