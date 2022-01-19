#include <stdio.h>

int main(void)  {
    int num;
    
    printf("숫자를 입력하세요 : ");
    scanf("%d", &num);

    if( num % 2 == 0)
        printf("입력한 문자는 짝수입니다.");

    else
        printf("입력한 문자는 홀수 입니다.");

    return 0;
 

}