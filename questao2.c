#include <stdio.h>

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