# push_swap

## Description

`push_swap` est un projet de tri d'une pile d'entiers en utilisant un ensemble restreint d'opérations sur deux piles (`a` et `b`). L'objectif est de trier la pile `a` dans l'ordre croissant avec le moins de mouvements possible.

Ce projet met l'accent sur l'optimisation des algorithmes de tri et la gestion efficace de la mémoire.

## Règles et Fonctionnement

- Deux piles sont utilisées :
  - `a` : Contient les nombres à trier au départ.
  - `b` : Pile auxiliaire utilisée pour le tri.
- Ensemble limité d'opérations autorisées :
  - `sa` / `sb` / `ss` : Swap (échange les deux premiers éléments d'une pile)
  - `pa` / `pb` : Push (déplace le premier élément d'une pile à l'autre)
  - `ra` / `rb` / `rr` : Rotate (fait passer le premier élément en dernier)
  - `rra` / `rrb` / `rrr` : Reverse Rotate (fait passer le dernier élément en premier)

## Implémentation

- Gestion des erreurs (doublons, caractères invalides, dépassement d'entier)
- Algorithme optimisé en fonction de la taille de la pile :
  - Tri simple pour `n <= 3`
  - Tri spécifique pour `n <= 5`
  - Algorithme de tri par groupes (ex : Radix sort, Tri rapide optimisé) pour `n > 5`
- Efficacité du tri mesurée en nombre d'opérations

## Compilation et Utilisation

Compilez avec :

```sh
make
```
Exécutez avec une liste d'entiers :
```
./push_swap 4 67 3 87 23
```

