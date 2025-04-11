# Projet libft

Le projet **libft** consiste à recréer certaines fonctions standard de la bibliothèque C, telles que celles manipulant les chaînes de caractères, la mémoire et les listes chaînées, pour mieux comprendre le fonctionnement interne de ces fonctions.

## Fonctions implémentées

Voici une liste des fonctions que j'ai implémentées dans ce projet :

### Fonctions de manipulation de chaînes de caractères

- `ft_isalpha` : Vérifie si un caractère est alphabétique.
- `ft_isdigit` : Vérifie si un caractère est un chiffre.
- `ft_isalnum` : Vérifie si un caractère est alphanumérique.
- `ft_isascii` : Vérifie si un caractère est un caractère ASCII.
- `ft_isprint` : Vérifie si un caractère est imprimable.
- `ft_strlen` : Calcule la longueur d'une chaîne.
- `ft_strchr` : Trouve la première occurrence d'un caractère dans une chaîne.
- `ft_strrchr` : Trouve la dernière occurrence d'un caractère dans une chaîne.
- `ft_strncmp` : Compare les `n` premiers caractères de deux chaînes.
- `ft_strnstr` : Recherche une sous-chaîne dans une chaîne, limité à `n` caractères.
- `ft_atoi` : Convertit une chaîne de caractères en entier.
- `ft_strdup` : Duplique une chaîne de caractères.
- `ft_substr` : Extrait une sous-chaîne d'une chaîne.
- `ft_strjoin` : Concatène deux chaînes de caractères.
- `ft_strtrim` : Supprime les caractères spécifiés du début et de la fin d'une chaîne.
- `ft_split` : Divise une chaîne en un tableau de sous-chaînes.
- `ft_itoa` : Convertit un entier en une chaîne de caractères.
- `ft_strmapi` : Applique une fonction sur chaque caractère d'une chaîne et crée une nouvelle chaîne.
- `ft_striteri` : Applique une fonction sur chaque caractère d'une chaîne.

### Fonctions de manipulation de mémoire

- `ft_memset` : Remplit un bloc de mémoire avec une valeur.
- `ft_bzero` : Remplie un bloc de mémoire avec des zéros.
- `ft_memcpy` : Copie un bloc de mémoire d'une zone vers une autre.
- `ft_memmove` : Copie un bloc de mémoire, même en cas de chevauchement.
- `ft_memchr` : Recherche la première occurrence d'un octet dans un bloc de mémoire.
- `ft_memcmp` : Compare deux blocs de mémoire sur `n` octets.
- `ft_calloc` : Alloue de la mémoire et initialise à zéro.

### Fonctions d'écriture dans un fichier

- `ft_putchar_fd` : Affiche un caractère sur un fichier.
- `ft_putstr_fd` : Affiche une chaîne de caractères sur un fichier.
- `ft_putendl_fd` : Affiche une chaîne suivie d'un saut de ligne sur un fichier.
- `ft_putnbr_fd` : Affiche un entier sur un fichier.

### Fonctions pour les listes chaînées

- `ft_lstnew` : Crée un nouvel élément de liste.
- `ft_lstadd_front` : Ajoute un élément au début de la liste.
- `ft_lstsize` : Calcule la taille de la liste.
- `ft_lstlast` : Récupère le dernier élément de la liste.
- `ft_lstadd_back` : Ajoute un élément à la fin de la liste.
- `ft_lstdelone` : Supprime un élément de la liste.
- `ft_lstclear` : Supprime tous les éléments de la liste.
- `ft_lstiter` : Applique une fonction sur chaque élément de la liste.
- `ft_lstmap` : Crée une nouvelle liste en appliquant une fonction sur chaque élément de la liste existante.

## Installation

1. Clonez ce dépôt sur votre machine locale :
   ```bash
   git clone https://github.com/username/libft.git

2. Accédez au répertoire du projet :
     ```bash
    cd libft

3. Compilation
Pour compiler la bibliothèque, exécutez la commande make :
    ```bash
    make
4. Pour nettoyer les fichiers compilés :

    ```bash
    make clean
5. Pour supprimer tous les fichiers générés par make :

    ```bash
    make fclean
6. Pour recompiler après un nettoyage complet :

    ```bash
    make re
