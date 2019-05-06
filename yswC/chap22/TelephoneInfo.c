#include <stdio.h>
#include <string.h>

struct person{
    char name[20];
    char phoneNum[20];
    int age;
};  // structure 뒤에 semi-colon 붙이기 

int main(void){
    struct person man1, man2;

    // input
        // man1.name = "john"; //error: assignment to expression with array type
        // man1.phoneNum = "010-9999-9999";
    strcpy(man1.name, "john");
    strcpy(man1.phoneNum, "010-1122-3344");
    man1.age = 30;

    printf("name : "); scanf("%s", man2.name);
    printf("phone-number :"); scanf("%s", man2.phoneNum);
    printf("age : "); scanf("%d", &man2.age);

    // output 
    printf("person #1 \n");
    printf("name : %s \n", man1.name);
    printf("phone number : %s \n", man1.phoneNum);
    printf("age : %d \n\n", man1.age);

    printf("person #2 \n");
    printf("name : %s \n", man2.name);
    printf("phone number : %s \n", man2.phoneNum);
    printf("age : %d \n\n", man2.age);

    
    return 0;
}