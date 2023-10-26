int main(int argc, char const *argv[])
{
    float sal , sal2, qtd_sal_min, qtd_sal_min2;
float sal_min;
int m; 
int n;

printf("Digite o Valor do Salario Minimo: (EX: 1.000) \n ");
scanf("%f", &sal_min);

printf("Digite Seu Salario Atual: (EX: 1.000)\n");
scanf("%f", &sal);

printf("O Valor digitado foi de: \n");
printf("%.3f.\n", sal);

printf("O valor acima esta certo?\n");
printf("Digite 1 para SIM e 2 para NAO \n");
scanf("%d", &m);

switch (m)
    {
    case 1:
       qtd_sal_min = sal / sal_min;
       
       printf("O seu Total recebido de Salarios Minimos Foi de: %.2f", qtd_sal_min);
        break;

    case 2:
        
        
        
        printf("Digite Novamente o Valor do Seu Salario: (EX: 1.000) \n");
        scanf("%f", &sal2);
        
        printf("O valor do seu Salario e de %.3f.\n", sal2);
        printf("Esta certo? Digite 1 Para SIM e 2 Para NAO\n");
        scanf("%d", &n);
        
        qtd_sal_min2 = sal2 / sal_min; 
        
        if(n==2){
        	
        printf("Reinicie o Programa");
        
    } else{
        
		printf("O seu Total recebido de Salarios Minimos Foi de: %.2f.\n", qtd_sal_min2);	
    }
        break;

    default:
        printf("Opcao Invalida Reinicie o Programa");
        
        break;
   	
}
    return 0;
}
