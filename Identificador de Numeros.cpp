#include <stdio.h>
#include <conio.h>
main()
{
int digito;
printf("Entre com um digito [0 .. 9]: ");
scanf("%d",&digito);
switch (digito)
{
case 0: printf("Zero\n");
break;
case 1: printf("Um\n");
break;
case 2: printf("Dois\n");
break;
case 3: printf("Tres\n");
break;
case 4: printf("Quatro\n");
break;
case 5: printf("Cinco\n");
break;
case 6: printf("Seis\n");
break;
case 7: printf("Sete\n");
break;
case 8: printf("Oito\n");
break;
case 9: printf("Nove\n");
break;
default: printf("ERRO: Não é digito\n");
}

//Primeiro exercicio feito utilizando switch
//Obrigado por ler o código 
getche();
}
