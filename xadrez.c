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
int main() {
    moverTorre();
    moverBispo();
    moverRainha();
    return 0;
}
