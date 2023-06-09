/*
 *  Nome:   Gisele de Sá Santos
 *  Mat:    2215310009
 *
 *  INSERTION_SORT
 */

#include <stdio.h>
#include <time.h>

void insertion_sort(int arr[], int x){
    int i, aux, ant_i;
    for( i = 1; i < x; i++)
    {
        aux = arr[i];  //INICIO NA 1 POSICAO DO ARRAY
        ant_i = i-1; // ant_i REPRESENTA A POSICAO ANTERIOR DO ARRAY
        while(ant_i >= 0 && arr[ant_i] > aux)  // ENQUANTO A POSICAO ANTERIOR FOR MAIOR QUE 0 E ELEMENTO DA POSICAO ANTERIOR FOR MAIOR QUE O ELEMENTO DA POSIÇÃO POSTERIOR
        {
            arr[ant_i+1] = arr[ant_i]; //TROCA DE POSICAO
            ant_i = ant_i -1; //DECREMENTA PARA CONTINUAR COMPARANDO COM ANTERIORES
        }
        arr[ant_i + 1] = aux;
    }
    for (i = 0; i < x; i++)
        printf("\n%d ", arr[i]);
    printf("\n");

}

int main() {
    int arr[10];
    int i, n = 10;

    double start, finish, elapsed; //variaveis do relogio

    //LER O VETOR
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // INICIA TEMPORIZADOR
    start = (double) clock() / CLOCKS_PER_SEC;

    //COMEÇA A ORDENAÇÃO DO VETOR
    insertion_sort(arr, n);

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
