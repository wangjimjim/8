#include <stdio.h>

void t(int a,int b) {
    if( a == 0 || b == 0) {
        printf("數字不為零\n");
        return;
    }
    while( a > 0 && b > 0 ) {

    if( a > b )
        a = a % b;
    else
        b = b % a;
}
    if( a == 0 )
        printf("最大公因數為%d\n",b);
    else
        printf("最大公因數為%d\n",a);
}
int main(void) {
    int a,b;
   
    printf("??入a,b球最大公因數:");
    scanf("%d %d",&a,&b);
    t(a,b);
    return 0;
}



