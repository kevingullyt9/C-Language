#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <math.h>

float calculaMedia (float p1, float p2, float p3){
    return ((p1+p2+p3) / 3);
}

int main(){
	system("color E");
	setlocale(LC_ALL,"Portuguese-brazilian");
    
    float media1, media2, media3, resultado;

    printf("\n==== Calculo da media ====\n\n\n\n");

    printf("Informe a nota das tres provas: \n");
    scanf("%f %f %f", &media1, &media2, &media3);

    resultado = calculaMedia(media1,media2,media3);
    printf("Media: %.1f\n",resultado);

	system("pause");
	return 0;
}
