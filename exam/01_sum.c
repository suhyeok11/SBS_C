/*
    정수 하나를 입력받아서, 1부터 N까지 합을 구하여 출력하는 프로그램을 완성하시오.
    (입력에서)
        정수입력 : 
    (출력에서)
        1~10 까지 합계 = 55
*/
# include <stdio.h>
    int main (void) {
        int a = 1;
        int n;
        int sum = 0;

        
        printf("정수 입력: ");
        scanf("%d", &n);
        
        while(a <= n) {
        sum += a;
        a++ ;

        }
        printf("1 ~ %d 까지의 합계 : %d", n, sum);

        return 0;
    }