#include <stdio.h>
#include <stdlib.h>

typedef struct Lista
{
    int num;
    struct Lista *prox;
}lista;

lista *criar(){
    lista *aux;
    aux = malloc(sizeof(lista));
    aux->prox = NULL;

    return aux;
}

void inserir(lista *list)
{
    lista *tmp, *aux;

    tmp = malloc(sizeof(lista));

    tmp->num = num;
    tmp->prox = NULL;

    aux = list;
    while(aux->prox != NULL)
    {
        aux = aux->prox;
    }

    aux->prox = tmp;
}

void mostrar(lista *list)
{
    lista *aux;
    aux = list->prox;

    while(aux != NULL)
    {
        printf("%d\n", aux->num);
        aux = aux->prox;
    }
    printf("\n");
}

void remover(lista *list)
{
   list *aux;
   aux = list->prox;
   list->prox = aux->prox;
   free(aux);
}

lista *buscar(lista *list)
{
    int x;

    lista *aux;
    aux = list;

    while(aux != NULL)
    {
        if(aux->num == x)
        {
            return aux;
        }
        else
        {
            aux = aux->prox;
        }
    }
    return NULL;
}

void ordenar(lista *list)
{
    int x;
    lista *aux, *aux2;

    for(aux = list->prox; aux != NULL; aux = aux->prox)
    {
        for(aux2 = aux->prox; aux2 != NULL; aux2 = aux2->prox)
        {
            if(aux->num > aux2->num)
            {
                x = aux->num;
                aux->num = aux2->num;
                aux2->num = x;
            }
        }
    }
}
