#include <stdio.h>

int main(void)  {
    int n = 1;
    for( ; ; )
    {
        printf(" n : %d\n", n);
        n++; 
        if( n == 30 ) 
            break; 

    }
    
    return 0;

}