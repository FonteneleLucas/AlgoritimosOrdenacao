
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "Sort.h" 

using namespace std;

//deve adicionar com 0 na posicao array[0];
int tree[] = {0, 5, 12, 64, 1, 37, 90, 91, 97};
int sizeTree = sizeof(tree)/sizeof(tree[0]);

//int ordenado[sizeof (tree) / sizeof (tree[0])];

void heapfy(int array[], int i, int tamanho) {

    int pai = i;
    int esq = 2 * i;
    int dir = (2 * i) + 1;
    int maior = i;
    int aux;

    if (esq <= tamanho) {
        if (array[esq] > array[i]) {
            maior = esq;
        }
    }

    if (dir <= tamanho) {
        if (array[esq] > array[pai] || array[dir] > array[pai]) {
            if (array[esq] > array[dir]) {
                maior = esq;
            } else {
                maior = dir;
            }
        }
    }

    //    printf("Esq: %d (%d); Pai: %d (%d); Dir: %d (%d)        ", esq, array[esq], pai, array[pai], dir, array[dir]);

    if (maior != i) {
        //        printf("maior != i\n");
        aux = array[pai];
        array[pai] = array[maior];
        array[maior] = aux;
        heapfy(array, maior, tamanho);
    }

}

void max_heapify2(int *a, int i, int tamanho) {
    int esq, dir, maior, aux;

    esq = 2 * i;
    dir = (2 * i) + 1;
    maior = i;

    if (esq <= tamanho) {
        if (a[esq] > a[i]) {
            maior = esq;
        }
    }

    if (dir <= tamanho) {
        if (a[esq] >= a[dir] && a[esq] > a[i]) {
            maior = esq;
        } else if (a[dir] >= a[esq] && a[dir] > a[i])
            maior = dir;
    }

    if (maior != i) {
        //        printf("maior != i\n");
        aux = a[i];
        a[i] = a[maior];
        a[maior] = aux;
        max_heapify2(a, maior, tamanho);
    }
}

void removeOrdena(int tamanho) {

    int prioridade = tree[1];
    tree[1] = tree[tamanho - 1];
    tree[tamanho - 1] = 0;
    //    ordenado[tamanho - 1] = prioridade;

    tamanho--;
    heapfy(tree, 1, tamanho);
    //    max_heapify2(tree, 1, tamanho);
    tree[tamanho] = prioridade;
    //    for (int i = 1; i < tamanho; i++) {
    //        printf("%d\t", tree[i]);
    //    }
    //    printf("\n");
}

int main() {
    for (int i = sizeTree / 2; i >= 1; i--) {
        //        max_heapify2(tree, i, sizeTree);
        heapfy(tree, i, sizeTree);
    }

    printf("MaxHeap: \n");
    for (int i = 1; i < sizeof (tree) / sizeof (tree[0]); i++) {
        printf("%d\t", tree[i]);
    }

    printf("\n\n");

    for (int i = 0; i < (sizeof (tree) / sizeof (tree[0])) - 1; i++) {
        removeOrdena((sizeof (tree) / sizeof (tree[0])) - i);

    }

    printf("Ordenado: \n");
    for (int i = 1; i < sizeof (tree) / sizeof (tree[0]); i++) {
        printf("%d\t", tree[i]);
    }

    return 0;
}
