/*
    ���� �ϳ��� �Է¹޾Ƽ�, 1���� N���� ���� ���Ͽ� ����ϴ� ���α׷��� �ϼ��Ͻÿ�.
    (�Է¿���)
        �����Է� : 
    (��¿���)
        1~10 ���� �հ� = 55
*/
# include <stdio.h>
    int main (void) {
        int a = 1;
        int n;
        int sum = 0;

        
        printf("���� �Է�: ");
        scanf("%d", &n);
        
        while(a <= n) {
        sum += a;
        a++ ;

        }
        printf("1 ~ %d ������ �հ� : %d", n, sum);

        return 0;
    }