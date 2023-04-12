#include <stdio.h>


int main()
{
    float ladoA;
    printf("Digite o tamanho da lateral do quadrado:");
    scanf("%f", &ladoA);
    printf("Area do quadrado é: %g",
    ladoA*4);
    
}

5.Faça um programa que calcule e imprima a área de um círculo.

#include <stdio.h>

int main()
{
      float raio, areaTotal;
    printf("Digiteo raio do circulo:");
    scanf("%f", &raio);
    areaTotal = 3.14 * (raio*raio);
    printf("Area do circulo é: %g",areaTotal);
}
