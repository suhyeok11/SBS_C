#include <stdio.h>

int main(void)  {
    //약수
    //공약수?
    //: 두 정수의 공통된 약수
    //12 : 1 2 3 4 6 12 
    //18 : 1 2 3 6 9 18
    //12와 18의 공약수 : 1 2 3 6 

    //최대공약수?
    // : 공약수 중에서 최댓값
    // 12와 18의 최대공약수 6

    //공배수
    // : 두 정수의 공통된 배수
    // 12 : 12 24 36 48
    
    // 두 정수 입력
    int A, B;
    int big, small;
    int gcd, lcm;    
    int R;              // 최대공약수, 최소공배수
                   

    printf(" 정수 A, B입력 : ");
    scanf("%d %d", &A, &B);
    //두수의 크기 비교
    if( A >= B ) {
        big = A;
        small = B;
    } else {
        big = B;
        small = A;
    }
      
    while(1) {
       
        R = big % small;

        // 현재의 작은 수를 다음 작은 수에 대입
        big = small;
       
        // 나머지를 다음 작은 수에 대입
        small = R;

        if( R == 0) {
            gcd = big;              
            lcm = A * B / gcd;
            break;
        }
    }
    printf("최대공약수 : %d\n", gcd);    
    printf("최소공배수 : %d\n", lcm);

    return 0;

}