#include <stdio.h>

int main(void)  {
 

   int N;
   char S[10];
   printf("���� : ");
   scanf("%d", &N);


   switch( N ) {
        case 100:
        case 90:
            printf("������ A �Դϴ�.");
            break;
        case 80:
        case 70:
            printf("������ B �Դϴ�.");
            break;

        case 60:
        case 50:
                printf("������ C �Դϴ�.");
            break;
              
        default :            
            printf("������ F");
               
        }

    return 0;
    


}