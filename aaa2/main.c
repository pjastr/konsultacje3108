#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

void foo(struct element * lista)
{
    if (lista->next == NULL || lista->next->next == NULL)
        return;
    struct element * wsk = lista->next;
    struct element * wsk2 = lista->next;
    while(wsk2->next->next != NULL)
    {
        wsk2=wsk2->next;
    }
    struct element * wsk3 = wsk2->next;
    lista->next= wsk3;
    wsk3->next = wsk;
    wsk2->next = NULL;
}

void wyswieltListeZG(struct element * lista)
{
    struct element * wsk=lista->next;
    while(wsk!=NULL)
    {
        printf("%d\n", wsk->i);
        wsk=wsk->next;
    }
    printf("---\n");
}

int main()
{
    struct element * lista = malloc(sizeof(struct element));
    lista->next = malloc(sizeof(struct element));
    lista->next->i = 2;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = -4;
    lista->next->next->next = NULL;
    wyswieltListeZG(lista);
    foo(lista);
    wyswieltListeZG(lista);
    return 0;
}
