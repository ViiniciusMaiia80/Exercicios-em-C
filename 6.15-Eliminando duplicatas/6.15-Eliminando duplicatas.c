/*6.15 Eliminação de duplicatas. Use um array de subs
crito único para resolver o problema a seguir. Leia 20 
números, cada um entre 10 e 100, inclusive. À medida 
que cada número for lido, imprima-o apenas se ele não 
for uma duplicata de um número já lido. Considere a 
‘pior das hipóteses’: os 20 números são diferentes. Use o 
menor array possível para resolver esse problema.*/

#include <stdio.h>
#define SIZE 20
#define MIN_VALUE 10
#define MAX_VALUE 100
#define INTERVALO (MAX_VALUE-MIN_VALUE+1)


int main(void){
	int duplicata[INTERVALO]={0},numero;

	printf("Digite %d numeros entre %d e %d\n", SIZE, MAX_VALUE, MIN_VALUE);
	for(int i=0;i<SIZE;i++){
		printf("\nElemento %d de %d:", i+1, SIZE);
		scanf("%d", &numero);

		if(numero<10 || numero>100){
			printf("Valor invalido. Tente novamente\n");
			i--;
			continue;
		}
		
		if(duplicata[numero-10]==0){
			printf("%d", numero);
			duplicata[numero-10]=1;
		}
	}
	return 0;
}
