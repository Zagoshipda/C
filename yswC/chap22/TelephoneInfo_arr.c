// TelephoneInfo.c 구조체 배열로 구현하기 

#include <stdio.h>
#include <string.h>

struct Person{
    char name[20];
    char phoneNum[20];
    int age;
};

int main(void){
    struct Person man[2];

    //input
    strcpy(man[0].name, "Lee");
    strcpy(man[0].phoneNum, "010-123-123");
    man[0].age = 30;
    strcpy(man[1].name, "Jun");
    strcpy(man[1].phoneNum, "010-322-999");
    man[1].age = 28;


    //output
    for(int i=0; i<2; i++){
        printf("%dth man --- \n", i+1);
        printf("%s, %s, %d \n", man[i].name, man[i].phoneNum, man[i].age);
    }


    return 0;
}