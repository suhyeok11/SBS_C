#include <stdio.h>
#include <string.h> // 문자열을 다루는 헤더파일

int main(void)  {
    char phone[10] = "Samsung";

    printf("스마트폰 이름 : %s \n", phone);
    //문자열 복사 함수 - strcpy
    // strcpy(복사받을 변수, 복사할 문자열);
    strcpy(phone, "Iphone 12");
    printf("스마트폰 이름 : %s \n", phone);

    return 0;

}