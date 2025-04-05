#include <stdio.h>

int main() {

    char nome[30] = "Pernambuco";
    char carta[25] = "A01";
    char Cidade[50] = "Recife";
    int população = 1.86707;
    float area = 218;
    float pib = 54.970;
    int Pturistico = 60;


    printf("Estado: %s\n",nome);
    printf("Carta: %s\n",&carta);
    printf("cidade: %s\n",Cidade);
    printf("População: %d\n",população);
    printf("Area: %.2f km\n",area);
    printf("Pib: %.2f pib\n",pib);
    printf("Turistic: %d ponto\n",Pturistico);

return 0;
    return 0;
}