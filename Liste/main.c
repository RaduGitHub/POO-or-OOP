#include <stdio.h>
#include <stdlib.h>

struct admitere{
    int nota;
    char c[30];
    struct admitere *next;
};

void creare_lista(struct admitere *head, int n){
    struct admitere *element_nou = malloc(sizeof(struct admitere));


}

int main()
{
    struct admitere *head = malloc(sizeof(struct admitere));
    int n;

    printf("Numarul de elevi:");
    scanf("%d", &n);


}
