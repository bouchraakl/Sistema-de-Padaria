#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define juro 1.03

struct tipo_de_produto
{
    int option ;
};
struct tipo_de_produto num_pro[50];

int main(){

    setlocale(LC_ALL,"");
    int check , quantity , forma_de_pagamento , mais , parcelas , retry;
    float valorTotal , valorTotalP , valorp ;

    startpoint :
        do{
    system("cls");//limpar a tela
    printf("BEM-VINDO AO SISTEMA DA PADARIA DA BARNICE ");
    printf("TIPOS DE PAO : ");
    printf("\n(1) FORMA");
    printf("\n(2) CENTEIO");
    printf("\n(3) BROA");
    printf("\n(4) REFRIGERANTE");
    printf("\n(5) SONHO");

    printf("\nPARA CONTINUAR CLICA NUMERO 1 E PARA SAIR NUMERO 2\n");
    scanf("%d" ,&check);
    getchar();
    startpoint1 :
    if (check == 1){

    printf("\nESCOLHE SEU PRODUTO :");
    scanf("%d" ,&num_pro.option);
    getchar();
    } else{
        return 0 ;
    }


    printf("\nQUER MAIS ALGUMA COISA ?\n (1) para sim \n (2) para nao\n");
    scanf("%d",&mais);
    getchar();

    if (mais == 1 ){
        goto startpoint;
    }else{

    switch (option){
    case 1 :
        printf("\nQUANTAS UNIDADES : ");
        scanf("%d" , &quantity);
        valorTotal = quantity * 7.50 ;
        printf("VALOR TOTAL DA COMPRA : %f" , valorTotal);
        printf("\nESCOLHA A FORMA DE PAGAMENTO : ");
        printf("\na.	1- Para pagamento à Vista");
        printf("\nb.	2- Para parcelamento");
        printf("\nSUA ESCOLHA :");
        scanf("%d",&forma_de_pagamento);
        if (forma_de_pagamento==1){
                printf("O SEU VALOR FINAL E :%f",valorTotal);
       }else {
           printf("\nQUANTAS PARCELAS : ");
           scanf("%d",&parcelas);
           valorTotalP = valorTotal * juro;
           printf("\nO VALOR TOTAL COM PARCELAMENTO :%f" ,valorTotalP);
           valorp = valorTotalP / parcelas ;
           printf("\nO VALOR DAS PARCELAS : %f",valorp);
           }
           break;

    case 2 :
        printf("\nQUANTAS UNIDADES : ");
        scanf("%d" , &quantity);
        valorTotal = quantity * 8.69 ;
        printf("VALOR TOTAL DA COMPRA : %f" , valorTotal);
        printf("\nESCOLHA A FORMA DE PAGAMENTO : ");
        printf("\na.	1- Para pagamento à Vista");
        printf("\nb.	2- Para parcelamento");
        printf("\nSUA ESCOLHA :");
        scanf("%d",&forma_de_pagamento);
        if (forma_de_pagamento==1){
                printf("O SEU VALOR FINAL E :%f",valorTotal);
       }else {
           printf("\nQUANTAS PARCELAS : ");
           scanf("%d",&parcelas);
           valorTotalP = valorTotal * juro;
           printf("\nO VALOR TOTAL COM PARCELAMENTO :%f" ,valorTotalP);
           valorp = valorTotalP / parcelas ;
           printf("\nO VALOR DAS PARCELAS : %f",valorp);
           }
           break;

    case 3 :
        printf("\nQUANTAS UNIDADES : ");
        scanf("%d" , &quantity);
        valorTotal = quantity * 5.00 ;
        printf("VALOR TOTAL DA COMPRA : %f" , valorTotal);
        printf("\nESCOLHA A FORMA DE PAGAMENTO : ");
        printf("\na.	1- Para pagamento à Vista");
        printf("\nb.	2- Para parcelamento");
        printf("\nSUA ESCOLHA :");
        scanf("%d",&forma_de_pagamento);
        if (forma_de_pagamento==1){
                printf("O SEU VALOR FINAL E :%f",valorTotal);
       }else {
           printf("\nQUANTAS PARCELAS : ");
           scanf("%d",&parcelas);
           valorTotalP = valorTotal * juro;
           printf("\nO VALOR TOTAL COM PARCELAMENTO :%f" ,valorTotalP);
           valorp = valorTotalP / parcelas ;
           printf("\nO VALOR DAS PARCELAS : %f",valorp);
           }
           break;

    case 4 :
        printf("\nQUANTAS UNIDADES : ");
        scanf("%d" , &quantity);
        valorTotal = quantity * 8.00 ;
        printf("VALOR TOTAL DA COMPRA : %f" , valorTotal);
        printf("\nESCOLHA A FORMA DE PAGAMENTO : ");
        printf("\na.	1- Para pagamento à Vista");
        printf("\nb.	2- Para parcelamento");
        printf("\nSUA ESCOLHA :");
        scanf("%d",&forma_de_pagamento);
        if (forma_de_pagamento==1){
                printf("O SEU VALOR FINAL E :%f",valorTotal);
       }else {
           printf("\nQUANTAS PARCELAS : ");
           scanf("%d",&parcelas);
           valorTotalP = valorTotal * juro;
           printf("\nO VALOR TOTAL COM PARCELAMENTO :%f" ,valorTotalP);
           valorp = valorTotalP / parcelas ;
           printf("\nO VALOR DAS PARCELAS : %f",valorp);
           }
           break;

    case 5 :
        printf("\nQUANTAS UNIDADES : ");
        scanf("%d" , &quantity);
        valorTotal = quantity * 5.00 ;
        printf("VALOR TOTAL DA COMPRA : %f" , valorTotal);
        printf("\nESCOLHA A FORMA DE PAGAMENTO : ");
        printf("\na.	1- Para pagamento à Vista");
        printf("\nb.	2- Para parcelamento");
        printf("\nSUA ESCOLHA :");
        scanf("%d",&forma_de_pagamento);
        if (forma_de_pagamento==1){
                printf("O SEU VALOR FINAL E :%f",valorTotal);
       }else {
           printf("\nQUANTAS PARCELAS : ");
           scanf("%d",&parcelas);
           valorTotalP = valorTotal * juro;
           printf("\nO VALOR TOTAL COM PARCELAMENTO :%f" ,valorTotalP);
           valorp = valorTotalP / parcelas ;
           printf("\nO VALOR DAS PARCELAS : %f",valorp);
           }
           break;
    default :
        printf("\nopcao invalida");
        printf("\nPARA TENTAR NOVAMENTE CLICA 1 PARA SAIR CLICA 2 ");
        scanf("%d" , &retry);
        getchar();
        if (retry == 1 ){
            goto startpoint1 ;
        }




    }
    }

        }
        while(check == 2);





}





