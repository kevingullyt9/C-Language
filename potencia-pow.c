#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <math.h>

int main(){
	system("color E");
	setlocale(LC_ALL,"Portuguese-brazilian");
	
    float base;
    float expoente;
    float potencia;
    int pot;

    printf("Informe o valor da base: \n");
    scanf("%d",&base);

    printf("Informe o valor do expoente: \n");
    scanf("%d",&expoente);

    potencia = pow(base,expoente);
    pot = pow(2,3); // resultado direto

    printf("%.2f elevado a %.2f = %.2f",base,expoente,potencia);
    printf("Resultado direto: %.2d",pot);

	system("pause");
	return 0;
}
