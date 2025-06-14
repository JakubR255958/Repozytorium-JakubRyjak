#include <iostream>
#include <ctime>

int main() {
    int UserValue;
    int Randomvalue;
    time_t t;

    srand(time(&t));
    Randomvalue = rand()%20+1;

    printf("Gra liczby losowe\n");
    printf("Zgadnij wylosowana liczbe\n");

    scanf("%d", &UserValue);

    while ( UserValue != Randomvalue) {
        if (UserValue > Randomvalue){
            printf("Liczba jest za duza\n");
            printf("Sproboj jeszcze raz\n");
            scanf("%d", &UserValue);
        } else {
            printf("Liczba jest za mala\n");
            printf("Sproboj jeszcze raz\n");
            scanf("%d", &UserValue);
        }
    }
    if (UserValue == Randomvalue) {
        printf("Odgadles liczbe\n");
        return 0;
    }
}
