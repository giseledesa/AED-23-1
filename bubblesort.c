/*
    Nome:   Gisele de Sa Santos
    Mat:    2215310009

    Bubblesort
*/

#include <stdio.h>
#include <time.h>

void bubblesort(int vetor[], int n)
{
    int i, j, temp;
    int contador1 = 0;
    int contador2 = 0;

    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            contador1++;

            if (vetor[j] > vetor[j+1])
            {
                contador2++;

                temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
    printf("Bubblesort\n");
    printf("Loop: %d\n",contador1);
    printf("Comparações: %d\n",contador2);
}

int main(int argc, char** argv)
{
    int vetor[100];
    int n = 100;
    double start, finish, elapsed;

    //ler o vetor
    for (int i = 0; i < n; i++)
        scanf("%d", &vetor[i]);

    //inicia o cronometro
    start = (double) clock() / CLOCKS_PER_SEC;

    bubblesort(vetor, n);
    //FINALIXA O CRONOMETRO
    finish = (double) clock() / CLOCKS_PER_SEC;

    //calcula tempo
    elapsed = (double) finish - start;

    printf("%f s \n", elapsed );

    printf("vetor ordenado: ");

    for (int i = 0; i < n; i++)
        printf("%d ", vetor[i]);

    printf("\n");

    return 0;
}