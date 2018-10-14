#include "functii.h"

void creare_lista(admitere *head){
    admitere *element_nou = malloc(sizeof(admitere));
    admitere *iterator = head;
    admitere *last_element;

    char name[30];
    float grade;
    while (iterator->next != NULL) {
        iterator = iterator->next;
    }
    last_element = iterator;

    printf("\nCandidates name: ");
    fflush(stdin);
    gets(name);
    printf("\nCandidates grade: ");
    scanf("%f", &grade);

    last_element->next = element_nou;
    element_nou->nota = grade;
    strcpy (element_nou->nume, name);
    element_nou->next = NULL;
}

void print(admitere *head){
    admitere *iterator = head;
    int i = 0;

    while (iterator->next != NULL){
        printf("%d.", i+1);
        printf("%s", iterator->next->nume);
        printf("\t %.2f \n", iterator->next->nota);
        iterator = iterator->next;
        i++;
    }
}

void sortare(admitere *head){
    int swap;
    admitere *aux_1;
    admitere *aux_2 = NULL;

    if (head == NULL){
        return;
    }

    while (swap != 0){
        swap = 0;
        aux_1 = head;

        while (aux_1->next != aux_2){
            if (aux_1->nota > aux_1->next->nota){
                interchange(aux_1, aux_1->next);
                swap = 1;
            }
            aux_1 = aux_1->next;
        }
        aux_2 = aux_1;
    }
}

void interchange(admitere *a, admitere *b)
{
    int temp;
    temp = a->nota;
    a->nota = b->nota;
    b->nota = temp;

    char name[30];
    strcpy(name, a->nume);
    strcpy(a->nume, b->nume);
    strcpy(b->nume, name);
}

void find_person(admitere *head, char name[]){
    int pozitie = -1;
    admitere *iterator = head;
    int student_gasit = 0;

    while (iterator->next != NULL){
        pozitie ++;
        if (strcmp(iterator->next->nume, name) == 0){
            student_gasit = 1;
            break;
        }
        iterator = iterator->next;
    }

    if (student_gasit == 1){
        printf("%d %s %f\n", pozitie+1, iterator->next->nume, iterator->next->nota);
    }else{
        printf("\nNu exista");
    }
}

void dif( admitere *head, admitere *head_adm, admitere *head_res){
    admitere *iterator = head->next;

    do{
        if(iterator->nota >= 5){
            push_end_adm(head_adm, iterator->nota, iterator->nume);
        }else{
            push_end_res(head_res, iterator->nota, iterator->nume);
        }
        iterator = iterator->next;
    }while(iterator != NULL);
}

void push_end_adm(admitere *head_adm, float grade, char name[]){
    admitere *element_nou = malloc(sizeof(admitere));
    admitere *iterator = head_adm;
    admitere *last_element;

    while (iterator->next != NULL) {
        iterator = iterator->next;
    }
    last_element = iterator;

    last_element->next = element_nou;
    element_nou->nota = grade;
    strcpy(element_nou->nume, name);
    element_nou->next = NULL;
}

void push_end_res( admitere *head_res, float grade, char name[]){
    admitere *element_nou = malloc(sizeof(admitere));
    admitere *iterator = head_res;
    admitere *last_element;

    while (iterator->next != NULL) {
        iterator = iterator->next;
    }
    last_element = iterator;

    last_element->next = element_nou;
    element_nou->nota = grade;
    strcpy(element_nou->nume, name);
    element_nou->next = NULL;
}
