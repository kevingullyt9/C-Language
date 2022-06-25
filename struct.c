#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

struct componente{
    char nome[20];
    char referencia[5];
    float preco;
};

int main () {
    system("color E");
    setlocale(LC_ALL,"Portuguese");

    // tipo de dado    nome var
    struct componente comp;

    printf("Nome do componente: ");
    fgets(comp.nome, 20, stdin);

    printf("Referencia: ");
    fflush(stdin);
    gets(comp.referencia);

    printf("Preço: ");
    scanf("%f", &comp.preco);

    printf("Componente: %s\n", comp.nome);
   
    system("pause");
    return 0;

}