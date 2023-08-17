#include <stdio.h>

// unary ==> works left to right
// ++ ==> pre ma value upadate thay ane next check kare bija pre operator chhe.
// jo hoy to value upadate thay ane print no thay
// post ma pela print thay pachi next condition kare

int main()
{
    int a = 5;

    // printf("a : %d , a : %d ",a++,++a);  // 6 7

    //   printf("a : %d , a : %d ",++a,++a); // 77

    //  printf("a : %d , a : %d ",a,++a);  // 6 6

    // printf("a : %d , a : %d ",a++,++a);  // 6 7

    //  printf("a : %d , a : %d ",a++,a--);  // 4 5

    //     printf("a : %d , a : %d , a : %d , a : %d ",a++,++a,a,a--);  // pre/post no hoy to pan next condition
    // check karea and last value a ma aave

    //  printf("a : %d , a : %d , a : %d , a : %d ",a++,++a,a,a++);    // 7 8 8 5

    printf("a : %d , a : %d , a : %d , a : %d ", a, --a, a--, --a); // 2 2 4 2
}
