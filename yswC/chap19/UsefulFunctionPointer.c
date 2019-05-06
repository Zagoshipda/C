#include <stdio.h>

int getFirst(int age1, int age2, int (*cmp)(int n1, int n2)){
    return cmp(age1, age2);
}

int olderFirst(int age1, int age2){
    return age1 < age2 ? age2 : age1;
}

int youngerFirst(int age1, int age2){
    return age1 < age2 ? age1 : age2;
}

int main(void){

    int age1 = 20;
    int age2 = 45;

    printf("case 1... \n");
    int older = getFirst(age1, age2, olderFirst);
    printf("%d goes first \n", older);

    printf("case 2... \n");
    int younger = getFirst(age1, age2, youngerFirst);
    printf("%d goes first \n", younger);

    return 0;
}
