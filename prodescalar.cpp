/*
Escreva uma funcao que recebe dois vetores de inteiros com n (n <= 20) elementos como entrada,
calcula e retorna o valor do produto escalar entre eles. Exemplo: 

n = 5
v1 = <2, 3, 4, 0, -1>
v2 = <1, 2, 1, -1, 1>

Saida:
valor = 2*1 + 3*2 + 4*1 + 0*-1 + -1*1 =
      = 2   + 6   + 4   + 0    - 1
      = 11


Crie uma funcao para ler um vetor de tamanho n, com o prototipo abaixo:

void leitura(int n, int *v);


Crie uma funcao para calcular e retornar o produto escalar entre dois vetores de tamanho n, com o prototipo
abaixo:

int prodescalar(int n, int *v1, int *v2); 

*/



#include<stdio.h>
#include<stdlib.h>


void leitura(int n, int *v);

int prodescalar(int n, int *v1, int *v2);


int main()
{
    int n, *v1, *v2;
    int soma;
    
    scanf("%d", &n);

    /*alocando os vetores*/
    v1 = (int*) calloc (n, sizeof(int));
    v2 = (int*) calloc (n, sizeof(int));
    /*leitura de n e dos elementos do vetor*/
    printf("Leitura do vetor 1: \n");
    leitura(n, v1);

    printf("Leitura do vetor 2: \n");
    leitura(n, v2);
    

    /*produto escalar - chamada da funcao*/
    soma = prodescalar(n, v1, v2);

    printf("Prod escalar: %d\n", soma);
    
    free(v1);
    free(v2);
    return 0;
}



/*funcao le um vetor usando um ponteiro para acessar as posicoes*/
void leitura(int n, int *v)
{
    for(int i = 0; i < n; i++)
        scanf("%d", &v[i]);
}

/*funcao calcula e retorna o produto escalar entre dois vetores*/
int  prodescalar(int n, int *v1, int *v2)
{
    int soma = 0;

    for(int i = 0; i < n; i++)
        soma = soma + (v1[i] * v2[i]);

    return soma;
}



