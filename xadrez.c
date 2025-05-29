#include <stdio.h>


void moverTorre(int i) {
    if (i<5) {
        printf("Torre - Direita\n");
        moverTorre(i+1);
    }
}

void moverRainha(int i) {
    if (i<8) {
    printf("Rainha - Esquerda\n");
    moverRainha(i+1);
}
}

void moverBispo(int i) {
    if (i < 5) {
        printf("Bispo - Cima\n");
        for (int j = 0; j < 1; j++) {
            printf("Bispo - Direita\n");
        }
        moverBispo(i + 1);
    }
}

void moverCavalo() {
        for (int i = 0; i < 2; i++) {        
        printf("Cavalo - Baixo\n");
    
        int j = 0;
        while (j < 1 && i == 1) {        
            printf("Cavalo - Esquerda\n");
            j++;
        }
}
}

int main() {
    moverTorre(0);
    printf("\n");
    moverBispo(0);
    printf("\n");
    moverRainha(0);
    printf("\n");
    moverCavalo();
    return 0;
}