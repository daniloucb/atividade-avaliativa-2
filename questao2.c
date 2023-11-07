#include <stdio.h>

// 2.	Com a proposta para ampliação da terceirização da mão de obra, 
// o Ministério da Fazenda está empenhado em elaborar uma análise sobre o 
// recebimento de salário regular através do registro em carteira profissional 
// dos funcionários no país. Assim, elabore um algoritmo que obtenha, para cada 
// assalariado, com carteira profissional assinada, o seu sexo M(masculino) e F(feminino) 
// e o valor de seu salário, devendo este salário ser maior que um real (R$1,00). 
// Seu algoritmo deverá analisar e classificar este assalariado em Acima, Igual ou Abaixo do salário mínimo. 
// Sabe-se que o salário mínimo nacional é de R$ 1400,00. 
// Após a leitura dos dados de cada assalariado cadastrado pelo ministério deverá ser apresentado o seu salário em reais, 
// a classificação por extenso em relação ao salário mínimo e o sexo por extenso (Masculino ou Feminino).

// A classificação em relação ao salário mínimo nacional deverá ser feita pelo sub-algoritmo 
// classificaSalario e os resultados solicitados para cada assalariado deverão ser apresentados 
// pelo sub-algoritmo denominado mostraClassifica. 
// Você deverá fazer a entrada de dados para todos os assalariados que foram pesquisados pelo ministério, 
// lembrando de fazer sempre a validação de todos os dados informados em sub-algoritmos específicos.   
// Na solução deste problema os resultados finais de cada assalariado que participou desta pesquisa deverão ser apresentados.
// Após a leitura dos dados de todos os assalariados pesquisados o seu algoritmo deverá apresentar a 
// quantidade de assalariados com salário abaixo do salário mínimo e a quantidade assalariados 
// com salário acima do salário mínimo

void checkSalary(float salary)
{
    float minimalSalary = 1400.00;
    char status[6];

    printf("R$ %.2f e ", salary);
    if(salary == minimalSalary)
        printf("igual ");
    else if(salary > minimalSalary)
        printf("maior ");
    else
        printf("menor ");

    printf("em relacao ao salario minimo de R$ %.2f\n", minimalSalary);
};

int main()
{
    char gender;
    float salary;

    printf("adicione funcionários.\n");

    do
        printf("escolha um gênero (F/M).\n");
    while((gender = getchar()) != 'M' && gender != 'F');

    do
    {
        printf("digite seu salário.\n");
        scanf("%f", &salary);
    }
    while(salary < 1.00);

    printf("\n\nsalário: R$ %.2f\n", salary);
    checkSalary(salary);

    if(gender == 'M')
        printf("genero: masculino");
    else
        printf("genero: feminino");

    return 0;
}