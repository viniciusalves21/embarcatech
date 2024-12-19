#include<stdio.h>
#include<stdlib.h>

#define LINHAS 4
#define COLUNAS 4

int main(void){

    int num=10;
    float num2=6.79;
    char letra='a';
    char frase[30]="Bom dia meu programador safado";
    double n3=1.23456;

    int valor1, valor2, soma, sub, mult, numero, resto, dia, cont, resp;
    float div, nota1, nota2, media, freq;

    /**
    //USO DO COMANDO PRINTF COM DIVERSAS VARIAVEIS
    printf("Hello World!");
    printf("\nSou lindo");
    
    printf("\nExibindo o numero inteiro %d",num);
    printf("\nExibindo o numero real  %f",num2);
    printf("\nExibindo um caractere %c",letra);
    printf("\nExbindo uma string/frase %s", frase);
    printf("\nExbindo variavel do tipo double %f",n3);
    printf("\n-------ABAIXO APARECERA TUDO EM UMA SO LINHA------");
    printf("\n\n NUMERO INTEIRO: %d, NUMERO REAL:%f, LETRA: %c, FRASE: %s, REAL TIPO DOUBLE:%f",num, num2, letra, frase, n3);

    //UTILIZANDO SCANF
    printf("\nDigite um num inteiro: ");
    scanf("%d", &valor1);
    printf("\nDigite outro numero inteiro: ");

    //OPERADORES ARITIMETICOS
    scanf("%d", &valor2);
    soma=valor1+valor2;
    sub=valor1-valor2;
    mult=valor1*valor2;
    div=valor1/valor2;

    printf("\nO resultado da soma entre %d e %d eh: %d",valor1,valor2, soma);
    printf("\nO resultado da subtração entre %d e %d eh: %d",valor1,valor2, sub);
    printf("\nO resultado da multiplicação entre %d e %d eh: %d",valor1,valor2, mult);
    printf("\nO resultado da divisão entre %d e %d eh: %d",valor1,valor2, div);
    
    //IF E ELSE
   printf("Digite um numero inteiro para acharmos o resto da divisao: ");
   scanf("%d", &numero);

   resto=numero % 2;
   printf("Resto da divisao %d", resto);

   if(resto==0){
    printf("\nNumero par");
   }
   else{
    printf("\nNumero impar\n");
   }


    //SWITCH CASE
    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda");
        break;
    case 3:
        printf("Terca");
        break;
    case 4:
        printf("Quarta");
        break;
    case 5:
        printf("Quinta");
        break;
    case 6:
        printf("Sexta");
        break;
    case 7:
        printf("Sabado");
        break;
    default:
    printf("Valor invalido");
        break;
    }
    
    printf("Digite a frequencia do aluno: ");
    scanf("%f", &freq);

    printf("Digite a primeira nota\n");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media=(nota1+nota2)/2;

    printf("A media eh: %.2f\n", media);

    //IF ANINHADO
    if(media>=6 && freq >= 75)//OPERADOR LOGICO && (OS DOIS PRECISAM SER VERDADEIROS)
    {
        printf("\nAluno APROVADO\n");
    }
    else
        if(media<3 || freq < 75)//OPERADOR OU (QUALQUER UM FOR VERDADEIRO REPROVA)
        {
            printf("\nAluno REPROVADO\n");
        }
        else
            {
                printf("\nAluno em RECUPERACAO\n");
            }

    //ESTRUTURA DE REPETIÇAO FOR
    for(cont = 1; cont <=10; cont++){
        printf("Boa tarde, meu programador safado (%d)\n", cont);
    }

    cont=1;//PREICSA INICIALIZAR O CONTADOR

    while(cont<=5){
        printf("Linguagem C (%d)\n", cont);
        cont++;
    }


    //ESTRUTRA DE REPETIÇÃO DO... WHILE
    //EXECUTA UM COMANDO PRIMEIRO E SOMENTE TESTA SE A CONDIÇÃO FOR VERDADEIRA NO FINAL
    //GARANTE QUE O COMNADO SEJA EXECUTADO NO MINIMO UMA VEZ
    cont=11;
    do
    {
        printf("looping do... while (%d)\n", cont);
    cont++;
    }while (cont <=10);
    
    do{//usando um valor do usario dentro do looping
        printf("Digite um valor positivo para continuar: ");
        scanf("%d", &resp);
    }while(resp>0);
     

     //declarando e inicializando o vetor v1
     float v1[4] = {7.1, 8.4, 9.5, 5.2};

    //printf("EXIBINDO OS VALORES DO VETOR \n\n");
    //printf("v1[0] = %.2f\n", v1[0]);
    //printf("v1[1] = %.2f\n",v1[1]);
    //printf("v1[2] = %.2f\n", v1[2]);
    //printf("v1[4] = %.2f\n", v1[3]);
    
    int i;//CONTADOR PARA O INDICE DO VETOR FOR

for (i=0; i<4; i++)
{
    printf("v1[%d] = %.2f\n",i, v1[i]);
}

   int matriz[3][3], i, j;

   printf("DIGITE VALOR PARA A MATRIZ\n\n");
   //Recebendo os valores da matriz
   for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        printf("Digite o Elemento [%d][%d]", i,j);
        scanf("%d", &matriz[i][j]);
    }
   }

   //IMPRIMINDO A MATRIZ
   printf("Matriz:\n");
   for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        printf("%d", matriz[i][j]);
    }
    printf("\n");
   }
*/

    int matriz[LINHAS][COLUNAS], i, j;
    
    printf("DIGTE OS ELEMENTOS DA MATRIZ");
        for(i=0; i<LINHAS; i++)
        {
            for(j=0; j<COLUNAS; j++)
            {
            printf("Digite o elemento[%d][%d]: ",i, j);
            scanf("%d", &matriz[i][j]);
            }
        }
    printf("MATRIZ ");
        for(i=0; i<LINHAS; i++)
        {
            for(j=0; j<COLUNAS; j++)
            {
            printf("%d ", matriz[i][j]);       
               }
               printf("\n");
        }


    return 0;
}

//Bora continuar de struct e funções mané

//MODIFIQUEI AQUI DEPOIS DA CRIAÇÃO DA BRANCH RAMO 2