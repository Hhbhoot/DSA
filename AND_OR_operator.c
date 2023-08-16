#include<stdio.h>
int main()
{
    int a=1 , b=2, c;

   // c= a && b;

    // printf("a : %d , b : %d , c : %d\n",a,b,c); // 1 1 1

    // c= a && --b;
    //printf("a : %d , b : %d , c : %d\n",a,b,c); // 1 1 1

    // c= --a && --b;
   // printf("a : %d , b : %d , c : %d\n",a,b,c); // 0 2 0



    // c= --a && b;
    //printf("a : %d , b : %d , c : %d",a,b,c); // 1 1 1

    //  c= ++a && b;

    //  printf("a : %d , b : %d , c : %d\n",a,b,c); // 2 2 1

      c=2 ;
      int d ;

    //   d=a && b&& c;

    //  printf("a : %d , b : %d , c : %d , d: %d\n",a,b,c,d); // 1 2 2 1

    //   d=--a && --b&& c++;

    //  printf("a : %d , b : %d , c : %d , d: %d\n",a,b,c,d); // 0 2 2 0

     //  d=a && ++b&& --c;

     //printf("a : %d , b : %d , c : %d , d: %d\n",a,b,c,d); // 1 3 3 1

    //     d=a && (b || c );

    //  printf("a : %d , b : %d , c : %d , d: %d\n",a,b,c,d); // 1 2 2 1

       d=1;

       int e ;
    //    e=a || (b && c ) || d ;;

    //  printf("a : %d , b : %d , c : %d , d: %d  e : %d\n",a,b,c,d,e); // 1 2 2 1 1

       
       e= --a || (b && c ) || ++d ;;

     printf("a : %d , b : %d , c : %d , d: %d  e : %d\n",a,b,c,d,e);

    







}