/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboufqir <iboufqir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:26:02 by iboufqir          #+#    #+#             */
/*   Updated: 2023/11/11 11:01:35 by iboufqir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new -> next = *lst;
    *lst = new;
}

/* int main() {
    // Création de quelques nœuds pour la démonstration
    t_list *node1;
    node1->content = 42;
    node1->next = NULL;

    t_list *node2;
    node2->content = 23;
    node2->next = NULL;

    // Initialisation de la liste
    t_list *myList = NULL;

    // Ajout de node1 au début de la liste
    ft_lstadd_front(&myList, node1);

    // Affichage de la liste après l'ajout de node1
    printf("Liste après l'ajout de node1 :\n");
    t_list *current = myList;
    while (current != NULL) {
        printf("%d -> ", current->content);
        current = current->next;
    }
    printf("NULL\n");

    // Ajout de node2 au début de la liste
    ft_lstadd_front(&myList, node2);

    // Affichage de la liste après l'ajout de node2
    printf("Liste après l'ajout de node2 :\n");
    current = myList;
    while (current != NULL) {
        printf("%d -> ", current->content);
        current = current->next;
    }
    printf("NULL\n");

    // Libération de la mémoire
    free(node1);
    free(node2);

    // Libération de la mémoire de la liste
    current = myList;
    while (current != NULL) {
        t_list *next = current->next;
        free(current);
        current = next;
    }

    return 0;
} */