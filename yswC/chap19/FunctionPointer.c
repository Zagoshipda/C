#include <stdio.h>

void adder(int n1, int n2){
    printf("%d + %d = %d \n", n1, n2, n1+n2);
}

void showString(char* str){
    printf("%s \n", str);
}

int main(void){

    char* str = "Function Pointer";
    int num1 = 10, num2 = 20;

    void (*fptr1)(int, int) = adder;
    void (*fptr2)(char*) = showString;

    adder(num1, num2);
    fptr1(num1, num2);

    showString(str);
    fptr2(str);

    return 0;
}