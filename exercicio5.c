// Escreva o seu código a seguir
#include<stdio.h>

int main()  {
    float n1,n2,res;
    printf("Qual � o teu peso?\n");
    scanf("%f", &n1);
    printf("Qual � a tua altura?\n");
    scanf("%f", &n2);
    
    res=n1/(n2*n2);
    printf("O teu �ndice de massa corporal �  %.3f",res);
   
}
