#include <stdio.h>


void moverTorre() {
    int i = 0;
    while(i<5) {
        printf("Torre - Direita\n");
        i++;
    }
}

void moverBispo() {
    int i = 0;
    do {
        printf("Bispo - Cima, Direita\n");
        i++;
    } while (i<5);
}

void moverRainha() {
    for (int i = 0; i <8; i++) {
        printf("Rainha - Esquerda\n");
        
    }
}

void moverCavalo() {
        for (int i = 0; i < 2; i++) {        
        printf("Baixo\n");
    
        int j = 0;
        while (j < 1 && i == 1) {        
            printf("Esquerda\n");
            j++;
        }
}
}

int main() {
    moverTorre();
    moverBispo();
    moverRainha(); 
    moverCavalo();
    return 0;
}
