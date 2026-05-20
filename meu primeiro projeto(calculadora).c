#include <stdio.h>

int main()
{
    char operação;
    double numeroa, numerob, resultado;
    
    //operação
   printf("olá, seja bem vindo a super calculadora!\n");
   printf("qual a operação que deseja(+,-,/,*)?\n");
   scanf("%c", &operação); 
   
   // numero a
   
   printf("digite o primeiro número:",operação);
   scanf("%lf", &numeroa);
   // numero b
   
   printf("digite o segundo número:",operação);
   scanf("%lf", &numerob);
   
   // condicional
   switch(operação){
   case '+':;
        resultado= numeroa + numerob;
        break;
   case '-' :;
        resultado= numeroa - numerob;
        break;
   case '*' :;
        resultado= numeroa * numerob;
        break;
   case '/':;
     if (numerob == 0){ 
       printf("divisão por 0 não é permitido.");
       return 1;
  } else{
        resultado = numeroa / numerob;
   }
        break;
   default :;
        printf("erro, operação inválida");
        return 1;
    }   
   
   printf("%.2lf %c  %.2lf = %.2lf",numeroa, operação, numerob,resultado);
   return 0;
  
}
