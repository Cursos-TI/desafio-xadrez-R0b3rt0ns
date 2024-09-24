//Desafio Xadrez Iniciante


#include <stdio.h>
#include <locale.h>

int main() {
    //declarando variaveis do codigo.
    int movimento = 1, peca, qmovimento;

    setlocale(LC_ALL,"");
    ///Exibindo menu.
    printf("Selecione a peça que deseja mover.\n");
    printf("1. Bispo.\n");
    printf("2. Torre.\n");
    printf("3. Rainha.\n");
    scanf("%d", &peca);// lendo a opção escolhida

    if(peca == 1 || peca == 2|| peca == 3 ){//if testando as opções validas
        //Pedindo o número de casas a avançar
        printf("Digite quantas casas deseja avançar:\n");
        scanf("%d", &qmovimento);//Lendo a quntidade de vezes que o usuario deseja movimentar a peça

    switch (peca)
    {

    case 1://Opção 1 Bispo
        printf("Bispo.\n");
        while(movimento <= qmovimento){
            printf("Cima.\n");
            printf("Direita.\n");
            movimento++;
    }
        break;

    case 2://Opção 2 Torre
         printf("Torre.\n");
        while(movimento <= qmovimento){
            printf("Direita.\n");
            movimento++;
    }
        break;

    case 3://Opção 3 Rainha
        printf("Rainha.\n");
        while(movimento <= qmovimento){
            printf("Esquerda.\n");
            movimento++;
    }
        break;
    default:
        printf("Opção invalida.\n");
        break;
    }//Fim do switch

    }else{// caso não seja umas das 3 opções
        printf("Opção invalida!");
        }//Fim do if
    return 0;
}
