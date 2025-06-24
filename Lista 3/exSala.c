





#include <stdio.h>
int main( ) {

    int a,
    int b;
    int y;

    printf("Digite o valor de A....:");
    scanf("%d", &a);
    printf("Digite o valor de B....:");
    scanf("%d", &b);

    if (a < b){
        y = b-a;
    }else if ( b < a) {
        y = a-b;
    }else{
        y = a+b;
    }
     printf("O valor de A e igual.....:%d\n", a);
     printf("O valor de B e igual.....:%d\n", b);
     printf("O valor de Y e igual.....:%d\n", y);







    return 0;
}