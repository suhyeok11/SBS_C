#include <stdio.h>

int main(void)  {
     // 중첩 for 문 작성하기
     // 구구단 출려하기 
    
    for ( int i = 2; i <= 100; i++) {
        for (int j = 1; j <= 9; j++) {
            printf("%d X %d = %d\n", i, j, (i*j));
        }
        printf("\n");
    }

    return 0; 
}