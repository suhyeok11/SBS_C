#include <stdio.h>

int main(void)  {
    //���
    //�����?
    //: �� ������ ����� ���
    //12 : 1 2 3 4 6 12 
    //18 : 1 2 3 6 9 18
    //12�� 18�� ����� : 1 2 3 6 

    //�ִ�����?
    // : ����� �߿��� �ִ�
    // 12�� 18�� �ִ����� 6

    //�����
    // : �� ������ ����� ���
    // 12 : 12 24 36 48
    
    // �� ���� �Է�
    int A, B;
    int big, small;
    int gcd, lcm;    
    int R;              // �ִ�����, �ּҰ����
                   

    printf(" ���� A, B�Է� : ");
    scanf("%d %d", &A, &B);
    //�μ��� ũ�� ��
    if( A >= B ) {
        big = A;
        small = B;
    } else {
        big = B;
        small = A;
    }
      
    while(1) {
       
        R = big % small;

        // ������ ���� ���� ���� ���� ���� ����
        big = small;
       
        // �������� ���� ���� ���� ����
        small = R;

        if( R == 0) {
            gcd = big;              
            lcm = A * B / gcd;
            break;
        }
    }
    printf("�ִ����� : %d\n", gcd);    
    printf("�ּҰ���� : %d\n", lcm);

    return 0;

}