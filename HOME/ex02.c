# include <stdio.h>
int main (void){

    int value1, value2, result;
    
    printf("type number : \n");
    scanf("%d %d", &value1, &value2);

    result = value1 * value2;

    printf("�� ���� ���� ������� %d �Դϴ�.\n", result);

    return 0;
}