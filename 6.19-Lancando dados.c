/*6.19 Lançando dados. Escreva um programa que si
mule o lançamento de dois dados. O programa de
verá usar rand para lançar o primeiro dado, e deverá  
usar rand novamente para lançar o segundo dado. 
Em seguida, a soma dos dois valores deverá ser cal
culada. [Nota: como cada dado pode mostrar um 
valor inteiro de 1 a 6, então, a soma dos dois valores 
variará de 2 a 12, com 7 sendo o resultado mais fre
quente; e 2 e 12, os resultados menos frequentes.] 
A Figura 6.23 mostra as 36 combinações possíveis 
dos dois dados. Seu programa deverá lançar os dois 
dados 36.000 vezes. Use um array de subscrito único 
para contar o número de vezes em que cada resulta
do possível aparece. Imprima os resultados em um 
formato tabular. Além disso, determine se os resul
tados são razoáveis; ou seja, existem seis maneiras 
de somar um 7, de modo que um sexto de todas as 
jogadas, aproximadamente, deverá ser 7 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define JOGADAS 36000

int lancarDados(void);

int main(void){
    srand(time(NULL));
    int frequencia[13]={0}, soma;
    for(int i=0; i<JOGADAS; i++){
        soma = lancarDados();
        frequencia[soma]++;
    }
    printf("Frequencia das somas de dados:\n");
    for(int i=2;i<13;i++){
        printf("%d- %d\n", i, frequencia[i]);
    }

    return 0;
}
int lancarDados(void){
    int d1,d2,soma;
    
    d1=1+rand()%6;
    d2=1+rand()%6;
    soma = d1 + d2;

    return soma;
}