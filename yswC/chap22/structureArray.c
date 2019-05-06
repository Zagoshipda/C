//http://ehpub.co.kr/tag/%EA%B5%AC%EC%A1%B0%EC%B2%B4-%EB%B0%B0%EC%97%B4%EC%97%90-%EC%9E%85%EB%A0%A5%EB%B0%9B%EC%95%84-%EC%B6%9C%EB%A0%A5/
// 종업원 이름, 주민등록번호, 급여정보를 멤버로 갖는 employee 구조체를 정의하려고 합니다. 3명의 종업원 정보를 사용자로부터 입력받은 후에 순차적으로 출력하는 간략한 코드를 부탁합니다.

//scanf_s 는 visual studio에서만 동작하는 비표준 함수이다. 

#include <stdio.h>

#define MAX_NAME_LEN    20 //종업원 이름의 최대 길이
#define MAX_PN_LEN      30 //주민등록번호 길이

//종업원 구조체 정의
typedef struct{
    char name[MAX_NAME_LEN];    //종업원 이름
    char pn[MAX_PN_LEN];        //주민등록번호
    int pay;                    //급여정보
}employee;

int main(){
    employee arr[3];    //길이가 3인 구조체 배열 선언
    int i;

    //input
    for (i = 0; i < 3; i++){
        printf("%d-th person --- \n", i + 1);
        printf("name:"), scanf("%s", arr[i].name);
        printf("person id: "), scanf("%s", arr[i].pn);
        printf("payment: "), scanf("%d", &arr[i].pay);
    }

    //output
    for (i = 0; i < 3; i++){
        printf("====  %d-th person info  ==== \n", i + 1);
        printf("name: %s \n", arr[i].name);
        printf("person id: %s \n", arr[i].pn);
        printf("payment: %d \n", arr[i].pay);
    }

    return 0;
}