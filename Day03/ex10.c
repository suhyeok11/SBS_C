#include <stdio.h>

int main(void)  {
    int num1 = 20, num2 = 10;
    int result;

    // AND ���� (&&)
    result = 1 && 1;
    printf("result 1 : %d\n", result);

    //�� �� ���� ����Ű  :  Ctrl + Shift + K

    result = num1 == 20 && num2 == 10;
 
    printf("result 2 : %d\n", result);

    result = 0 || 1;
    printf("result 3 : %d\n", result);

    result = 0 || 0;
    printf("result 3 : %d\n", result);

    //NOT ���� (!)
    printf("result 5 : %d\n", !0);
    printf("result 6 : %d\n", !1);


    return 0;


}