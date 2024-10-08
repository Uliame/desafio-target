#include <stdio.h>

/* Realizado por Thiago Henrique Uliame */

void main()
{
    //pertenceFibonacci(1618);
    //existeLetraA("Essa string pode ser informAda atrAvés de qualquer entradA de sua preferência ou pode ser previamente definida no código");
    //Soma();

}

/*- 1 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

void pertenceFibonacci(int numero) 
{
    int n0=0, n1=1, i;    //0 e 1 sao os primeiros numeros
    
    if(numero == n0 || numero == n1) 
    {
        printf("%d pertence a sequencia de Fibonacci.", numero);
        return;
    }

    while(n1 < numero) 
    {
        i = n1;
        n1 += n0;
        n0 = i;

        if(n1 == numero) 
        {
            printf("%d pertence a sequencia de Fibonacci.", numero);
            return;
        }
    }
    printf("%d nao pertence a sequencia de Fibonacci.\n", numero);
}

/*- 2 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

void existeLetraA(const char *str) 
{
    int cont=0;
    while (*str) 
    {
        if (*str == 'a' || *str == 'A') 
        {
            cont++;
        }
        str++;
    }
    if (cont > 0) 
    {
        printf("Existem %d letras A.", cont);
    } else 
    {
        printf("Não existem letras A no texto.");
    }
}

/*- 3 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

void Soma() 
{
    int INDICE = 12, SOMA = 0, K = 1;
    while (K < INDICE) 
    {
        K = K + 1;
        SOMA = SOMA + K;
    }
    printf("%d", SOMA);

        // O valor da variavel SOMA sera 66.
}

/*- 4 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

/*

a) 1, 3, 5, 7, 9 
b) 2, 4, 8, 16, 32, 64, 128 
c) 0, 1, 4, 9, 16, 25, 36, 49 
d) 4, 16, 36, 64, 100 
e) 1, 1, 2, 3, 5, 8, 13 
f) 2, 10, 12, 16, 17, 18, 19, 20

*/ 

/*- 5 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

/* 

S1  --------------  LA
S2  --------------  LB
S3  --------------  LC

O método conhecido para resolver esse problema é utilizando a temperatura das lâmpadas. 
Deixar uma das lâmpadas ligada por um tempo, desligá-la e acender uma outra. 

Digamos que eu deixe o primeiro interruptor ligado por alguns minutos, apague-o e em seguida acenda o segundo.
Visitando duas salas, a lâmpada que estiver acesa será do S2, enquanto a lâmpada apagada e quente será do S1 e a apagada e fria será do S3.

Este é um desafio de lógico conhecido, porém, repensando um pouco mais, podemos chegar em diferentes soluções caso utilizemos tecnologias.
Por exemplo, minhas duas idas às salas poderiam servir para instalar uma câmera em duas salas diferentes, a qual monitorando, eu poderia saber quais lâmpadas estão sendo afetadas por quais interruptores.
Isso claro, é apenas uma tentativa de revisitar um problema e dar um olhar diferente para ele e se aproveitar de que o enunciado não restringe quais ferramentas podem ser usadas.

*/