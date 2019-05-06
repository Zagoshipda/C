// 구조체 멤버 사이의 대입은 대응하는 멤버들 각각의 복사로 이루어진다 

#include <stdio.h>

typedef struct point{
    int xpos;
    int ypos;
} Point;

void showPosition(Point pos){
    printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

Point getPosition(void){
    Point cen;
    printf("input pos (m n): "), scanf("%d %d", &cen.xpos, &cen.ypos);
    return cen;  
}

int main(void){
    Point curPos = getPosition();   //cen의 멤버에 저장된 값은 curPos의 멤버에 나란히 복사되어 저장된다
    showPosition(curPos);   //curPos에 저장된 멤버의 값은 매개변수 pos의 멤버들로 나란히 복사되어 저자오딘다.

    return 0;
}