#include <stdio.h>

int main(void)  {
    int num;
    
    printf("���ڸ� �Է��ϼ��� : ");
    scanf("%d", &num);

    if( num % 2 == 0)
        printf("�Է��� ���ڴ� ¦���Դϴ�.");

    else
        printf("�Է��� ���ڴ� Ȧ�� �Դϴ�.");

    return 0;
 

}