#include <stdio.h>

int main(void)  {
 
 int num, absolute;

 printf("���� �Է� : ");
 scanf("%d", &num);
 //scanf("���Ĺ���", &����);
 //  & : �ּҿ����� - ������ �ּҰ��� �����´�.

// ���� ������ (���� ������)
// : (����) ? (�� �ϋ�) : (���� �϶�);
 absolute = num > 0 ? num : num * -1;
 printf("���� : %d\n", absolute);

 return 0;

}