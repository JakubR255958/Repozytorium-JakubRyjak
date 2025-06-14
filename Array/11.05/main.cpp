#include <iostream>
#include <cstdio>

#define SIZE 10

void menu(void) {
    printf("Chose option:\n");
    printf("1. Enter numbers to array\n");
    printf("2. Show array\n");
    printf("3. Show maximum value\n");
    printf("4. Show minimum value\n");
    printf("5. Show average value\n");
    printf("6. Save array to file\n");
    printf("7. Restore array from file\n");
    printf("0. End program\n");
}

//Wprowadzanie wartości do tablicy
void numbers(int array[SIZE], int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
}

//Wyswietlanie tablicy
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }
}

//Wyswietlanie wartosci największej
void max(int array[SIZE], int size) {
    int maxVal = array[0];
    for (int i = 1; i < size; i++) {
        if (maxVal < array[i]) {
            maxVal = array[i];
        }
    }
    printf("Maximum array value: %d\n", maxVal);
}

//Wyswietlanie wartosci najmniejszej
void min(int array[SIZE], int size) {
    int minVal = array[0];
    for (int i = 1; i < size; i++) {
        if (minVal > array[i]) {
            minVal = array[i];
        }
    }
    printf("Minimum array value: %d\n", minVal);
}

//Wyswietlanie wartosci sredniej
void average(int array[SIZE], int size) {
    float suma = 0.0f;
    for (int i = 0; i < size; i++) {
        suma += array[i];
    }
    float avg = suma / size;
    printf("Average array value: %.2f\n", avg);
}

//Zapisywanie tablicy do pliku
int saveArrayToFile(int array[], int size) {
    FILE *fptr = fopen("array.txt", "w");
    if (fptr == NULL) {
        return 1;
    }
    for (int i = 0; i < size; ++i) {
        fprintf(fptr, "%d\n", array[i]);
    }
    fclose(fptr);
    return 0;
}

//Odzyskiwanie danych z pliku
int restoreArrayFromFile(int array[], int size) {
    FILE *fptr = fopen("array.txt", "r");
    if (fptr == NULL) {
        return 1; //Bląd otwarcia pliku
    }
    for (int i = 0; i < size; ++i) {
        fscanf(fptr, "%d", &array[i]);
    }
    fclose(fptr);
    return 0;
}


int main() {
    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int option = 0;
    int errorCode;

    do {
        menu();
        scanf("%d", &option);

        switch (option) {
            case 0:
                break;
            case 1:
                printf("Enter values:\n\n");
                numbers(array, SIZE);
                break;
            case 2:
                printf("Array: \n");
                printArray(array, SIZE);
                break;
            case 3:
                max(array, SIZE);
                break;
            case 4:
                min(array, SIZE);
                break;
            case 5:
                average(array, SIZE);
                break;
            case 6:
                printf("Saving data to the file\n\n");
                errorCode = saveArrayToFile(array, SIZE);
                if (!errorCode) {
                    printf("Array saved to the file\n\n");
                } else {
                    printf("Something went wrong...\n");
                }
                break;
            case 7:
                printf("Restoring data from the file\n\n");
                errorCode = restoreArrayFromFile(array, SIZE);
                if (!errorCode) {
                    printf("Array restored from the file\n\n");
                } else {
                    printf("Something went wrong...\n");
                }
                for (int i = 0; i < SIZE; i++) {
                    printf("array[%d] = %d\n", i, array[i]);
                }
                break;
            default:
                printf("Invalid option, try again.\n");
                break;
        }
    } while (option != 0);

    printf("Koniec programu\n");

    return 0;
}