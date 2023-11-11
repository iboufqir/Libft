#include "libft.h"
#include <stdio.h>

// Fonction à utiliser avec ft_lstiter pour imprimer le contenu d'un élément de la liste
void print_function(void *content)
{
    printf("%d\n", *(int *)content);
}

// Fonction à appliquer pour la transformation des éléments de la liste
void *map_function(void *content)
{
    // Exemple simple : doubler chaque élément de la liste
    int *value = (int *)content;
    int *result = malloc(sizeof(int));
    if (result)
        *result = (*value) * 2;
    return result;
}

// Fonction pour supprimer le contenu d'un élément de la liste
void delete_function(void *content)
{
    // Exemple simple : libérer la mémoire allouée pour un entier
    free(content);
}

int main(void)
{
    // Création d'une liste avec quelques éléments
    t_list *original_list = ft_lstnew(malloc(sizeof(int)));
    original_list->content = (void *)1;
    ft_lstadd_back(&original_list, ft_lstnew(malloc(sizeof(int))));
    original_list->next->content = (void *)2;
    ft_lstadd_back(&original_list, ft_lstnew(malloc(sizeof(int))));
    original_list->next->next->content = (void *)3;

    // Utilisation de ft_lstmap pour créer une nouvelle liste transformée
    t_list *transformed_list = ft_lstmap(original_list, &map_function, &delete_function);

    // Affichage de la liste originale
    printf("Original List:\n");
    ft_lstiter(original_list, &print_function);

    // Affichage de la liste transformée
    printf("\nTransformed List (doubled):\n");
    ft_lstiter(transformed_list, &print_function);

    // Nettoyage de la mémoire
    ft_lstclear(&original_list, &delete_function);
    ft_lstclear(&transformed_list, &delete_function);

    return 0;
}