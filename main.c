int main(int argc, char const *argv[])
{
    float sal , sal2, qtd_sal_min, qtd_sal_min2;
float sal_min;
int m; 
int n;

printf("-------------------------------------------------- \n ");
printf("-------------------------------------------------- \n ");

printf("Digite o Valor do Salario Minimo: (EX: 1.000) \n ");
scanf("%f", &sal_min);

printf("-------------------------------------------------- \n ");

printf("Digite Seu Salario Atual: (EX: 1.000)\n");
scanf("%f", &sal);
printf("-------------------------------------------------- \n ");
printf("O Valor digitado foi de: %.3f.\n ",sal);

printf("\n");
printf("O valor acima esta certo?\n");
printf("\n");
printf("Digite 1 para SIM e 2 para NAO \n");
scanf("%d", &m);
printf("\n");
printf("-------------------------------------------------- \n ");

switch (m)
    {
    case 1:
       qtd_sal_min = sal / sal_min;
       printf("-------------------------------------------------- \n ");
       printf("O seu Total recebido de Salarios Minimos Foi de: %.2f.\n", qtd_sal_min);
       printf("-------------------------------------------------- \n ");
        break;

    case 2:
        
        
        
        printf("Digite Novamente o Valor do Seu Salario: (EX: 1.000) \n");
        scanf("%f", &sal2);
        printf("\n"); 
        printf("O valor do seu Salario e de %.3f.\n", sal2);
        printf("\n");
        printf("Esta certo? Digite 1 Para SIM e 2 Para NAO\n");
        scanf("%d", &n);
        printf("\n");
        
        qtd_sal_min2 = sal2 / sal_min; 
        
        if(n==2){
        printf("-------------------------------------------------- \n ");	
        printf("Reinicie o Programa\n");
        printf("-------------------------------------------------- \n ");
    } else{
        printf("-------------------------------------------------- \n ");
		printf("O seu Total recebido de Salarios Minimos Foi de: %.2f.\n", qtd_sal_min2);	
        printf("-------------------------------------------------- \n ");
    }
        break;

    default:
    printf("-------------------------------------------------- \n ");
        printf("Opcao Invalida Reinicie o Programa");
    
        break;
   	
}
    return 0;
}
