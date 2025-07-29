#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispo = 5;
    int torre = 5;
    int rainha = 8;
    int cavalo = 2;
    int b = 0;
    int r = 0; 
    int passo_horizontal = 0;   



    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("***Jogada da Torre***\n");

    for (int i = 0; i < torre; i++)
    {
        printf("Direita\n");
    }
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\n***Jogada do Bispo***\n");

    while ( b < bispo)
    {
         printf("Cima, Direita\n");
         b++;
    }
    
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\n***Jogada da Rainha***\n");

    do
    {
       printf("Esquerda\n");
       r++;
    } while (r < rainha);
    
    


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\n***Jogada do Cavalo***\n");

    
    for (int passo_vertical = 0; passo_vertical < cavalo ; passo_vertical++)
    {
        printf("Baixo\n");
        if (passo_vertical==1)
        {
            while (passo_horizontal<1)
            {
                    printf("Esquerda\n");
                    passo_horizontal++;
            }
            
        }
        
    }
             
    movertorre(torre);
    moverbispo(bispo);
    moverrainha(rainha);
    moverbispomestre(bispo);
      
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    printf("\n***Jogada do Cavalo_Mestre***\n");

    
        for (int passo_mestre = 0; passo_mestre < cavalo ; passo_mestre++)
        {   

            for (int i = 0; i < 2; i++)
            {
                 printf("Cima\n");

            }
            
                printf("Direita\n");
                break;
            
        }
             
    // Recursividade e Loop Aninhado Bispo
            
       
    
    return 0;
}  
    
    
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    void movertorre(int casas_torre) {

        
        if (casas_torre>0)
        {
            if (casas_torre ==5)
            {
                printf("\n***Jogada da Torre_Recursiva***\n");

            }
            
            printf("Direita\n");
            movertorre(casas_torre-1);
        }
        
        

    }

    

    void moverbispo(int casas_bispo) {

        
        if (casas_bispo>0)
        {
            if (casas_bispo ==5)
            {
                printf("\n***Jogada do Bispo_Recursiva***\n");

            }
            
            printf("Cima, Direita\n");
            moverbispo(casas_bispo-1);
        }
        
        

    }

    

    void moverrainha(int casas_rainha) {

        
        if (casas_rainha>0)
        {
            if (casas_rainha ==8)
            {
                printf("\n***Jogada da Rainha_Recursiva***\n");

            }
            
            printf("Esquerda\n");
            moverrainha(casas_rainha-1);
        }
        
        

    }

    void moverbispomestre(int casas_bispo_mestre) {

            
            if (casas_bispo_mestre>0)
            {
                if (casas_bispo_mestre==1||casas_bispo_mestre==3||casas_bispo_mestre==5)
                {
                     printf("Esquerda\n");
                      if (casas_bispo_mestre ==5)
                    {
                        printf("\n***Jogada do Bispo_Recursiva_Mestre***\n");
                        printf("Esquerda\n");
                    }
                }
                else{
                   
                    for (int passo_interno = 0; passo_interno < 1; passo_interno++)
                    {
                        printf("Cima\n");
                    }
                    
                }
                moverbispomestre(casas_bispo_mestre-1);
            }

            
    }
    


    
    
