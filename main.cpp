
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "Sort.h" 

using namespace std;

//deve adicionar com 0 na posicao array[0];
int tree[] = {52, 62, 57, 84, 60, 8, 10, 39, 28, 44, 51, 72, 49, 30, 34, 3, 20, 37, 41, 47, 87, 67, 83, 68, 23, 42, 61, 53, 13, 45, 46, 63, 17, 64, 31, 14, 16, 79, 35, 80};
int sizeTree = sizeof (tree) / sizeof (tree[0]);


/*void heapfy(int array[], int i, int tamanho) {

    int pai = (i - 1) / 2;
    int esq = (2 * i) + 1;
    int dir = (2 * i) + 2;
    int maior = i;
    int aux;

    if (esq < tamanho) {
        if (array[esq] > array[i]) {
            maior = esq;
        }
    }

    if (dir < tamanho) {
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

}*/

void max_heapify(int *a, int i, int tamanho) {
    int esq, dir, maior, aux;

    esq = (2 * i) + 1;
    dir = (2 * i) + 2;
    maior = i;

    if (esq < tamanho) {
        if (a[esq] > a[i]) {
            maior = esq;
        }
    }

    if (dir < tamanho) {
        if (a[esq] > a[i] || a[dir] > a[i]) {
            if (a[esq] > a[dir]) {
                maior = esq;
            } else {
                maior = dir;
            }
        }
    }

    if (maior != i) {
        //        printf("maior != i\n");
        aux = a[i];
        a[i] = a[maior];
        a[maior] = aux;
        max_heapify(a, maior, tamanho);
    }
}

void removeOrdena(int tamanho) {

    int prioridade = tree[0];
    tree[0] = tree[tamanho - 1];
    tree[tamanho - 1] = 0;
    //    ordenado[tamanho - 1] = prioridade;
//    printf("Remove: %d\n",prioridade);

    tamanho--;
    //    heapfy(tree, 1, tamanho);
    max_heapify(tree, 0, tamanho);
    tree[tamanho] = prioridade;
//    for (int i = 1; i < tamanho; i++) {
//        printf("%d\t", tree[i]);
//    }
//    printf("\n");
}

int main() {
    for (int i = ((sizeTree / 2) - 1); i >= 0; i--) {
        max_heapify(tree, i, sizeTree);
        //        heapfy(tree, i, sizeTree);
    }

    printf("MaxHeap: \n");
    for (int i = 0; i < sizeof (tree) / sizeof (tree[0]); i++) {
        printf("%d\t", tree[i]);
    }

    printf("\n\n");

    //Remove e ordena
    for (int i = 0; i < (sizeof (tree) / sizeof (tree[0])); i++) {
        removeOrdena((sizeof (tree) / sizeof (tree[0])) - i);
    }
    
    printf("Ordenado: \n");
    for (int i = 0; i < sizeof (tree) / sizeof (tree[0]); i++) {
        printf("%d, ", tree[i]);
    }

    return 0;
}
