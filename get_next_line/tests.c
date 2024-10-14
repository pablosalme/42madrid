#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct list_struct
{
    char    *str;
    struct list_struct    *next;
}   t_list;

int main() {
    // Crear el primer nodo
    t_list *head = malloc(sizeof(t_list));
    head->str = strdup("Primer nodo"); // Copia la cadena en memoria dinámica
    head->next = malloc(sizeof(t_list)); // Crear el segundo nodo

    // Crear el segundo nodo
    head->next->str = strdup("Segundo nodo");
    head->next->next = NULL; // Fin de la lista

    // Imprimir los elementos de la lista
    t_list *current = head;
    while (current != NULL) {
        printf("%s\n", current->str);
        current = current->next; // Mover al siguiente nodo
    }

    // Liberar la memoria
    current = head;
    while (current != NULL) {
        t_list *temp = current;
        current = current->next;
        free(temp->str); // Liberar la cadena
        free(temp);      // Liberar el nodo
    }

    return 0;
}
