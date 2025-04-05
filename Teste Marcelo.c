#include <stdio.h>

    int main(){

        char estado[30] = "Pernambuco";
        char carta[25] = "A01";
        char cidade[40] = "Recife";
        int populacao = 1865707;
        float area = 218;
        float pib = 54.970;
        int Pturistico = 15;

        char estado2[30] = "Alagoas";
        char carta2[25] = "B02";
        char cidade2[28] = "Maceió";
        int populacao2 = 957916;
        float area2 = 509320;
        float pib2 = 27484016;
        int Pturistico2 = 45;

        printf("Estado: %s\n",&estado);
        printf("carta: %s\n",carta);
        printf("cidade: %s\n",cidade);
        printf("população: %d\n",populacao);
        printf("area: %.2f Km²\n",area);
        printf("pib: %.2f pib do municipio\n",pib);
        printf("Turisticos: %d locais turisticos\n",Pturistico);

        printf("\n");

        printf("Estado: %s\n",estado2);
        printf("carta: %s\n",carta2);
        printf("cidade: %s\n",cidade2);
        printf("População: %d\n",populacao2);
        printf("Area: %.2f Km²\n",area2);
        printf("pib: %.2f Bilhões\n",pib2);
        printf("Turisticos: %d locais turisticos\n",Pturistico2);

    return 0;

    }