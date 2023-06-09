/*
 *  Nome:   Gisele de Sá Santos
 *  Mat:    2215310009
 *
 *  QUICK_SORT
 */

#include <stdio.h>
#include <time.h>

int partition(int com, int fim, int v[])
{
    int i, j, x, t;

    i = com - 1;
    j = fim;
    x = v[fim]; // pivo é o ultimo elemento do vetor;

    for(;;) //LOOP INFINITO
    {
        //encontra o próximo elemento maior que o pivo a esquerda
        while(v[++i] < x)
            ;

        //encontra o próximo elemento menor que o pivô à direita
        while (x < v[--j])
        {
            if (j == com)
                break;
        }

        // Verifica se os índices ja se encontraram
        if (i >= j)
            break;

        // Troca os elementos
        t = v[i];
        v[i] = v[j];
        v[j] = t;
    }

    // Coloca o pivô na posição correta
    t = v[i];
    v[i] = v[fim];
    v[fim] = t;

    return i;

}

void quicksort(int inicio, int fim, int v[]) {
    int i;
    //se o tamanho do subarray for menor ou igual a 1, não é necessário ordenar
    if (fim <= inicio)
        return;

    // obtem a posição correta do pivô
    i = partition(inicio, fim, v);

    // ordena as submatrizes à esquerda e à direita do pivô
    quicksort(inicio, i - 1, v);
    quicksort(i + 1, fim, v);
}

int main(int argc, char** argv)
{
    int arr[10];
    int i, n = 10;

    double start, finish, elapsed; // CLOCK

    //LER O VETOR
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // INICIA TEMPORIZADOR
    start = (double) clock() / CLOCKS_PER_SEC;

    //COMEÇA A ORDENAÇÃO DO VETOR
    quicksort(0, n-1, arr);

    //FINALIZA TEMPORIZADOR
    finish = (double) clock() / CLOCKS_PER_SEC;

    //CALCULO DE TEMPO
    elapsed = (double) finish - start;

    //TEMPO TOTAL
    printf("%f s\n", elapsed);

    printf("Vetor Ordenado: ");
    for(i = 0; i < n; i++)
    {
        printf("%d", arr[i]);

    }
    printf("\n");

    return 0;
}
