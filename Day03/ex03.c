#include <stdio.h>

int main(void)  {
  double number1 = 10;
  int number2 = 1.2345;
  short number3 = 40000;
  // overflow (�����÷ο�)
  // Ư�� �ڷ����� ���� �������� �� ū ���� �Ҵ��ϴ� ���
  printf("number1: %f \n", number1);
  printf("number1: %d \n", number2); 
  printf("number1: %d \n", number3);
  return 0;
}