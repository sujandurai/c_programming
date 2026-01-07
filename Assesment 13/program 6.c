#include <stdio.h>
#include <stdlib.h>

struct student {
    int id, Maths, Science;
    struct student *next;
};

struct student *head = NULL;

void add() {
    struct student *n = malloc(sizeof(struct student));
    scanf("%d %d %d", &n->id, &n->Maths, &n->Science);
    n->next = head;
    head = n;
}

void remove_last() {
    if (!head) { printf("Empty\n"); return; }
    struct student *t = head, *p = NULL;
    while (t->next) { p = t; t = t->next; }
    printf("%d\n", t->id);
    if (p) p->next = NULL;
    else head = NULL;
    free(t);
}

void display() {
    for (struct student *t = head; t; t = t->next)
        printf("%d ", t->id);
    printf("\n");
}

int main() {
    int o;
    while (1) {
        scanf("%d", &o);
        if (o == 1) add();
        if (o == 2) remove_last();
        if (o == 3) display();
        if (o == 4) break;
    }
}
cd C:\Users\Admin\OneDrive\Desktop
