/**************************************************************************************************************
 * 
 * Autor........:Felipe Daniel da Silva
 * Data.........:31/01/2025
 * Objetivo.....: fazer um programa para verificar se o numero e par ou impar
 * 
 **************************************************************************************************************/
#include <stdio.h>
 
int main ( ) {
    
    int n1;
    int n2;
    int n3;
    int mAri;

    printf("Digite a primeira nota....:");
    scanf("%d", &n1);
    printf("Digite a segunda nota.....:");
    scanf("%d",&n2);
    printf("Digite a terceira nota....:");
    scanf("%d", &n3);

    

    if ( n1 % 2 == 0) {
        mAri = (n1+n2+n3)/3;
        printf("A nota e par");

    }else if (n2 % 2 == 0) {
        mAri = (n1+n2+n3)/3;
        printf("A nota e par");

}else if( n3 % 2 == 0) {
        mAri = (n1+n2+n3)/3;
        printf("A nota e par");
}else{
    printf("A nota e impar");
}
printf("A media aritimetica e.....:%d\n", mAri);

    return 0;
}