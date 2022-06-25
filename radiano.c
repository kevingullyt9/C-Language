#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <math.h>

float calculaRadiano (int anguloGrau){
    
    const float pi = 3.14;
    float rad = 180;
    
    //retorna o valor em radianos
    return ((anguloGrau * pi) / rad);
}

int main(){
	system("color E");
	setlocale(LC_ALL,"Portuguese-brazilian");
    
    int angGrau;
    float radianos;

    printf("Digite o angulo em graus: \n");
    scanf("%d",&angGrau);

    radianos = calculaRadiano(angGrau);

    printf("Angulo %d em radianos = %.1f\n",angGrau,radianos);

	system("pause");
	return 0;
}
