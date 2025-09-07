#include <stdio.h>

// movimento da Torre
void mover_torre(int casas_restantes) {
    
    if (casas_restantes <= 0) {
        return;
    }
    
    printf("Direita\n");
    
    
    mover_torre(casas_restantes - 1);
}

//  movimento do Bispo
void mover_bispo(int casas_restantes) {
    
    if (casas_restantes <= 0) {
        return;
    }
    
    printf("Cima, Direita\n");
    
    
    mover_bispo(casas_restantes - 1);
}

//  movimento da Rainha
void mover_rainha(int casas_restantes) {
    
    if (casas_restantes <= 0) {
        return;
    }
    
    printf("Esquerda\n");
    
    
    mover_rainha(casas_restantes - 1);
}

//  movimento do Bispo com loops aninhados
void bispo_loops_aninhados(int casas) {
    printf("Bispo com loops aninhados - %d casas na diagonal:\n", casas);
    
    
    for (int vertical = 0; vertical < casas; vertical++) {
        
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima, Direita\n");
        }
    }
}

//  movimento do Cavalo
void cavalo_movimento_complexo() {
    printf("Cavalo - movimento complexo (2 cima, 1 direita):\n");
    
    int casas_cima = 2;
    int casas_direita = 1;
    int movimento = 1;
    int direcao = 1; 
    
    while (movimento <= 3) { 
        
        
        if (direcao == 1 && movimento <= casas_cima) {
            printf("Cima\n");
            
            
            if (movimento == casas_cima) {
                direcao = 2;
                movimento = 1; 
                continue;
            }
        }
        
        else if (direcao == 2 && movimento <= casas_direita) {
            printf("Direita\n");
        }
        
        movimento++;
    }
}

// Cavalo com loops aninhados
void cavalo_loops_aninhados() {
    printf("Cavalo com loops aninhados (2 cima, 1 direita):\n");
    
    int movimentos_completos = 0;
    int max_movimentos = 3; 
    
    
    for (int etapa = 1; etapa <= 2; etapa++) {
        
        
        int i = 0;
        while (i < (etapa == 1 ? 2 : 1)) {
            
            if (movimentos_completos >= max_movimentos) {
                break; 
            }
            
            if (etapa == 1) {
                printf("Cima\n");
            } else {
                printf("Direita\n");
            }
            
            movimentos_completos++;
            i++;
            
            
            if (movimentos_completos > 10) {
                printf("Erro: Loop excessivo detectado\n");
                return;
            }
        }
    }
}

int main() {
    printf(" MOVIMENTOS DE XADREZ - AULA MESTRE \n\n");
    
    
    printf("Torre com recursividade - 5 casas para a direita:\n");
    mover_torre(5);
    printf("\n");
    
    
    printf("Bispo com recursividade - 5 casas na diagonal:\n");
    mover_bispo(5);
    printf("\n");
    
    
    bispo_loops_aninhados(5);
    printf("\n");
    
    
    printf("Rainha com recursividade - 8 casas para a esquerda:\n");
    mover_rainha(8);
    printf("\n");
    
    
    cavalo_movimento_complexo();
    printf("\n");
    
    
    cavalo_loops_aninhados();
    printf("\n");
    
    printf("Fim!\n");
    
    return 0;
}