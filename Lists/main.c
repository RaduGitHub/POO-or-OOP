#include "functii.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    admitere *head = malloc(sizeof(admitere));
    admitere *head_adm = malloc(sizeof(admitere));
    admitere *head_res = malloc(sizeof(admitere));
    int n;
    int optiune;
    int i;
    char name[30];

    head->next = NULL;
    head->nota = 0;

    head_adm->next = NULL;
    head_adm->nota = 0;

    head_res->next = NULL;
    head_res->nota = 0;

    printf("Numarul de elevi: ");
    scanf("%d", &n);

    //Crearea listei
    for(i = 0; i < n; i++){
        creare_lista(head);
    }

    printf("1-Afisarea listelor\n");
    printf("2-Sortarea listelor si afisare\n");
    printf("3-Cautarea dupa nume\n");
    printf("4-Separarea in doua liste si afisare\n");
    scanf("%d", &optiune);

    switch(optiune){
    case 1:{
        print(head);
        break;
    }
    case 2:{
    //Sortarea listei
        sortare(head);
        print(head);
        break;
    }
    case 3:{
        //Cautarea dupa nume
        printf("Numele persoanei cautate:");
        fflush(stdin);
        gets(name);
        find_person(head, name);
    }
    case 4:{
        //Separarea in liste diferite
        dif( head, head_adm, head_res);
        print(head_adm);
        printf("\n");
        print(head_res);
    }
    }
}
