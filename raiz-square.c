#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <math.h>

int main(){
	system("color E");
	setlocale(LC_ALL,"Portuguese-brazilian");
	
	float numero;
    float raiz;
    
    printf("Digite um numero: \n");
    scanf("%f",&numero);

    // sqrt(); raiz quadrada

    raiz = sqrt(numero);

    printf("Raiz quadrada do numero %2.f e %2.f\n",numero,raiz);

	system("pause");
	return 0;
}
