//Faça um programa que solicita e lê dois números, calcula e exibe o dobro do
//primeiro e o triplo do segundo.
#include <stdio.h>
int main(){
int n,n1,n2,d;
printf("digite um numero:");
scanf("%d",&n1);

printf("digite outro numero:");
scanf("%d",&n2);
n=n1*n1;
d=n2*n2;
printf("o dobro do primeiro numero é %d:",n);
printf("o triplo do segundo é%d:",d);
return 0;
}