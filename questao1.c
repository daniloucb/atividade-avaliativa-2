#include <stdio.h>

float validaQuantidade(int numPecas)
{
    float adicional = 0;

    if(numPecas > 50 && numPecas <= 80)
        adicional = 0.50;
    else if(numPecas > 80)
        adicional = 0.75;

    return numPecas * adicional;
};

float calculaSalario(float adicional)
{
    float salarioBase = 600;

    return salarioBase += adicional;
};

void mostrarFinal(float salarioFinal)
{
    printf("%.2f\n", salarioFinal);
};

int main()
{
    int quantidadeFuncionarios = 0;
    int numPecas;
    float salarioFinal;

    printf("adicione funcionários.\n");

    while(1)
    {
        scanf("%d", &numPecas);
        salarioFinal = calculaSalario(validaQuantidade(numPecas));
        quantidadeFuncionarios++;

        mostrarFinal(salarioFinal);
    }

    return 0;
}