#include <iostream>

 // void printVariables(int a, int b) {
   //  printf("\ta = %d\n", a);
  //   printf("\tb = %d\n", b);
  //   printf("\t&a = %p\n", &a);
   //  printf("\t&b = %p\n", &b);
// }

// void swap(int *ptrA, int *ptrB){
//    printf("ptrA = %d\n" , *ptrA );
//    printf("ptrB = %d\n" , *ptrB );
//    int temp = *ptrA;
//    *ptrA = *ptrB;
//    *ptrB =temp;
//    printf("ptrA = %d\n" , *ptrA );
//    printf("ptrB = %d\n" , *ptrB );
//}
// void printVariables(const int *ptr1, const int *ptr2) {
//  printf("\t*ptr1 = %d\n", *ptr1);
//  printf("\t*ptr2 = %d\n", *ptr2);
//}

void SUM(const int *ptr1, const int *ptr2, int *ptrResult){
    *ptrResult = *ptr1 + *ptr2;
}
void SUB(const int *ptr1, const int *ptr2, int *ptrResult){
    *ptrResult = *ptr1 - *ptr2;
}
void MUL(const int *ptr1, const int *ptr2, int *ptrResult){
    *ptrResult = *ptr1 * *ptr2;
}
void DIV(const int *ptr1, const int *ptr2, int *ptrResult){
    *ptrResult = *ptr1 / *ptr2;
}

int main(){
    int a = 25;
    int b = 5;
    int result;
    int mode = 0;
    mode += 1;
    if (mode = 1) {
        SUM(&a, &b, &result);
        printf("SUM = %d\n", result);
        mode += 1;
    }
    if (mode = 2) {
        SUB(&a, &b, &result);
        printf("SUB = %d\n", result);
        mode += 1;
    }
    if (mode = 3) {
        MUL(&a, &b, &result);
        printf("MUL = %d\n", result);
        mode += 1;
    }
    if (mode = 4) {
        DIV(&a, &b, &result);
        printf("DIV = %d\n", result);
        mode += 1;
    }

}







































// #include <stdio.h>
//
//void printVariables(int a, int b){
//    printf("\ta = %d\n",a);
//    printf("\tb = %d\n",b);
//   printf("\t&a = %p\n",&a);
//   printf("\t&b = %p\n",&b);
//}
//
//void printVariables(const int *ptr1,const int *ptr2){
//    printf("\ta = %d\n",*ptr1);
//    printf("\tb = %d\n",*ptr2);
//}
//
//void swap(int *ptr1, int *ptr2){
//    printf("\tptr1 = %d\n", *ptr1);
//    printf("\tptr2 = %d\n", *ptr2);
//    int temp = *ptr1;
//    *ptr1=*ptr2;
//    *ptr2 = temp;
//    printf("\t*ptr1 = %d\n", *ptr1);
//    printf("\t*ptr2 = %d\n", *ptr2);
//}
//
//int main() {
//    int a = 10;
//    int b = 20;
//
//    printf("a = %d\n",a);
//    printf("b = %d\n",b);
//
//    swap(&a,&b);
//
//    printf("a = %d\n",a);
//    printf("b = %d\n",b);
//
//    printVariables(&a,&b);
//
//   int a = 10;
//   int b = 20;
//   int *ptr = NULL;
//
//    printf("a = %d\n",a);
//    printf("b = %d\n",b);
//    printf("&a = %p\n",&a);
//    printf("&b = %p\n",&b);
//    printf("ptr = %p\n",ptr);
//    printf("&ptr = %p\n",&ptr);
//
//    a = 15;
//    printf("a = %d\n",a);
//    printf("&a = %p\n",&a);
//
//    ptr = &a;
//    *ptr = 50;
//    printf("a = %d\n",a);
//    printf("&a = %p\n",&a);
//    printf("ptr = %p\n",ptr);
//
//    return 0;
//}