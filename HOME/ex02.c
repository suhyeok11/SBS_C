# include <stdio.h>
int main (void){

    int value1, value2, result;
    
    printf("type number : \n");
    scanf("%d %d", &value1, &value2);

    result = value1 * value2;

    printf("두 수를 곱한 결과값은 %d 입니다.\n", result);

    return 0;
}