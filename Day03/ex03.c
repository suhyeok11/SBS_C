#include <stdio.h>

int main(void)  {
  double number1 = 10;
  int number2 = 1.2345;
  short number3 = 40000;
  // overflow (오버플로우)
  // 특정 자료형이 갖는 범위보다 더 큰 값을 할당하는 경우
  printf("number1: %f \n", number1);
  printf("number1: %d \n", number2); 
  printf("number1: %d \n", number3);
  return 0;
}