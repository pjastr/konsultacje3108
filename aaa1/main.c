#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

void foo(struct element * lista)
{
    struct element * wsk = lista->next;
    struct element * wsk2 = lista->next->next;
    struct element * wsk3 = lista->next->next->next;
    lista->next = wsk2;
    wsk2->next = wsk;
    wsk->next = wsk3;
}

void wyswieltListeBezGlowy(struct element * lista)
{
    struct element * wsk=lista;
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
    lista->i = 7;
    lista->next = malloc(sizeof(struct element));
    lista->next->i = 8;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = -3;
    lista->next->next->next = malloc(sizeof(struct element));
    lista->next->next->next->i = 20;
    lista->next->next->next->next = NULL;
    wyswieltListeBezGlowy(lista);
    foo(lista);
    wyswieltListeBezGlowy(lista);
    return 0;
}
