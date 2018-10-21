#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct adm{
    float nota;
    char nume[30];
    struct adm *next;
}admitere;

void creare_lista(admitere *head);
void print(admitere *head);
void sortare( admitere *head);
void interchange(admitere *a, admitere *b);
void find_person(admitere *head, char name[]);
void dif( admitere *head, admitere *head_adm, admitere *head_res);
void push_end_res( admitere *head_res, float grade, char name[]);
void push_end_adm(admitere *head_adm, float grade, char name[]);
