#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <math.h>

float areaRetangulo (float base, float altura) {
    
    float area = base * altura;

    return area;
}

int main(){
	system("color E");
	setlocale(LC_ALL,"Portuguese-brazilian");

    float vBase;
    float vAltura;
    float vArea;

    printf("=== CALCULANDO A AREA DE UM RETANGULO ===\n");

    printf("Digite o valor da base: \n");
    scanf("%f",&vBase);

    printf("Digite o valor da altura: \n");
    scanf("%f",&vAltura);

    vArea = areaRetangulo(vBase,vAltura);

    printf("Area: %.1f",vArea);

	system("pause");
	return 0;
}
