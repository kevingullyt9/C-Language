#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <math.h>

//   função global

// void dobraNumero(int n1,int n2,int n3){
// nao precisa chamar dentro do main com pont e virgula;

// }

int main(){
	system("color E");
	setlocale(LC_ALL,"Portuguese-brazilian");
	
    void dobraNumero(int n1, int n2, int n3);
    int a, b, c;

    printf("Digite tres numeros: \n");
    scanf("%d %d %d", &a,&b,&c);

    dobraNumero(a,b,c);

	system("pause");
	return 0;
}

void dobraNumero(int n1,int n2,int n3){
    printf("\n O dobro do numero %d e: %d", n1, n1 *2);
    printf("\n O dobro do numero %d e: %d", n2, n2 *2);
    printf("\n O dobro do numero %d e: %d", n3, n3 *2);
}