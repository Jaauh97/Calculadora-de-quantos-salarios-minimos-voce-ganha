#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
float sal , sal2, qtd_sal_min, qtd_sal_min2;
float sal_min;
int m; 
int n;

printf("Digite o Valor do Salario Minimo: ");
scanf("%f", &sal_min);

printf("Digite Seu Salario Atual:\n");
scanf("%f", &sal);

printf("O Valor digitado foi de: \n");
printf("%.3f.\n", sal);

printf("O valor acima esta certo?\n");
printf("Digite 1 para SIM e 2 para NÃO \n");
scanf("%d", &m);

if (m == 2)
{
  printf("Digite o Valor Correto do Seu Salario\n"); 
  scanf("%f", &sal2 );
  
  printf("O Valor Digitado foi %.3f.\n ",sal2);
  printf("O valor acima esta correto? Digite 1 para SIM e 2 para NAO\n");
  scanf("%d", &n);
  
if(n==2){
	
printf("Recomece o Programa.");
}
 
}

qtd_sal_min = sal / sal_min;





	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}