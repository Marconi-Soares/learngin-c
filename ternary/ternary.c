#include <stdio.h>

double findGreater(double n1, double n2){
    return (n1 > n2) ? n1 : n2;
}

double getNumber(){
    double number;
    printf("Digite um número: ");
    scanf("%lf", &number);
    return number;
}

int main(void){
    double n1 = getNumber();
    double n2 = getNumber();

    double greaterNum = findGreater(n1, n2);
    printf("%.2lf é o maior número.\n", greaterNum);
    return 0;
}
