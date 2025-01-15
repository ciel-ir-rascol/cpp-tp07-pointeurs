# TP07 - Les pointeurs
**STS 1CIEL** - Quelques exercices à réaliser sur CLion afin de comprendre comment utiliser les pointeurs en C++.

Ce repository est un projet CLion dans lequel vous trouverez un certain nombre de fichiers `.cpp` qui vont vous permettre de coder chaque exercice demandé. Une fois terminé il suffira de faire un commit, puis un push vers GitHub afin de rendre votre travail.


## Exo1 - Inverser le contenu de 2 variables
Écrivez une fonction C++ nommée swap_pointers qui prend deux pointeurs d'entiers en entrée et échange les valeurs auxquelles ils pointent. Vous pouvez utiliser une variable temporaire si vous le souhaitez, mais essayez de le faire sans utiliser de variables temporaires.

Dans la fonction `swapPointers()` du template `exo1.cpp` :
- `ptr1` : Un pointeur sur un entier
- `ptr2` : Un pointeur sur un entier

Dans la fonction `main()` du template `exo1.cpp` :
- `a` : un entier --> `ptrA` pointe sur `a`
- `b` : un entier --> `ptrB` pointe sur `b`

→ Vous devez inverser le contenu de a et de b ! **Rien n'est à ajouter ou modifier à la fonction `main()`**


## Exo 2 - Passer un pointeur en argument d'une fonction
On souhaite créer une fonction `multiplicationAvecPointeur` qui va multiplier un entier pointé par un pointeur, par un autre entier. Le pointeur et l'entier seront donnés en argument de la fonction.

Nous donnons le prototype de la fonction dans le template : `exo2.cpp`
```cpp
void multiplicationAvecPointeur(int* ptr, int multiplier)
```
- `ptr` est un pointeur, pointant sur la case mémoire du nombre à multiplier compris entre 1 et 100.
- `multiplier` est un entier compris entre 1 et 100, le nombre pointé par `ptr` sera multiplié par celui-ci, lors de l'appel de la fonction.


## Exo 3 - Trouver le maximum dans un tableau
Dans cet exercice vous devrez créer une fonction `findMax` qui renverra le plus grand nombre contenu dans un tableau d'entiers passé en argument.

Nous donnons le prototype de la fonction :
```cpp
int findMax(int* tabPtr, int taille)
```
- `tabPtr` est un pointeur contenant l'adresse de la première case du tableau
- `taille` est un entier représentant le nombre de cases du tableau

ℹ️ **Le tableau contiendra au moins un entier, les éléments seront tous différents**


## Exo 4 - Inverser le contenu d'un tableau
A présent nous souhaitons créer une fonction `reverseTab()` qui inversera le contenu d'un tableau passé en argument. 

### Exemple 
```text
unTableau contient {1,2,3,4}
Après changement, unTableau vaut : {4,3,2,1}
```

Nous donnons le prototype de la fonction :
```cpp
void reverseTab(int* tabPtr, int taille)
```
- `tabPtr` est un pointeur contenant l'adresse de la première case du tableau
- `taille` est un entier représentant le nombre de cases du tableau

🛑 **Il est interdit de faire une copie du tableau original, vous devrez vous servir du tableau à l'endroit où il se trouve en mémoire.**

ℹ️ Le tableau contiendra au moins un élément.


## Exo 5 - Inverser le contenu d'une chaine de caractère
Dans cet exercice il s'agit de créer une fonction `reverseString()` qui inversera le contenu d'une chaîne de caractères passée en argument et retournera une nouvelle chaîne inversée. Tout cela grâce aux pointeurs.

```text
uneChaine contient "Hello, world!"
Après changement, uneChaine vaut : "!dlrow ,olleH"
```

Nous donnons le prototype de la fonction :
```cpp
string reverseString(int& chaine)
```
- `stringAddress` est un entier représentant l'adresse en mémoire du premier caractère de la chaîne.

### ℹ️ Aide

- La fonction `c_str()` permet d'obtenir un pointeur sur la première case du premier caractère de la chaîne. Elle s'utilise de cette manière :
    ```cpp
    const char* debutChaine = chaine.c_str();
    ```
    ❗**Attention à bien utiliser `const char`**

- La fonction `size()` permet d'obtenir le nombre de caractère d'une chaîne :
    ```cpp
    int nbCaracs = chaine.size();
    ```
- La fonction `push_back()`, tout comme pour les vecteurs, permet de rajouter un caractère en fin de chaîne :
    ```cpp
    string uneChaine{"couco"};
    uneChaine.push_back('u');
    cout << uneChaine;
    // 🖥️ coucou
    ```

## Exo 6 - Multiplication de tableaux
Attention, ce dernier exercice est plus difficile 😱 ! Il applique tout ce qui a été vu sur les pointeurs.

Écrivez une fonction C++ nommée `moulinette()` qui prend en paramètre deux tableaux d'entiers ainsi que leurs tailles respectives, et alloue dynamiquement (allocation de mémoire **dans le heap**) un nouveau tableau d'entiers dont la taille est le produit des tailles des deux tableaux.

La fonction `moulinette()` doit parcourir le deuxième tableau et multiplier chaque élément par chaque élément du premier tableau, puis stocker le produit dans le nouveau tableau créé dans le heap.

La fonction doit retourner un pointeur vers le tableau nouvellement alloué.

Vous devrez également écrire une fonction `display()` qui prend en paramètre un pointeur vers un tableau d'entiers ainsi que sa taille, et affiche les éléments du tableau.

▶️ Nous donnons le programme principal dans le template `exo6.cpp`

### Exemple
```cpp
int tab1[] {1,2,3,4,5};
int tab2[] {10,20,30};

cout << "tab1: " ;
display(tab1,5);

cout << "tab2: " ;
display(tab2,3);

int *resultTab = moulinette(tab1, 5, tab2, 3);
cout << "Resultat: " ;
print(resultTab,15);

/*
🖥️ Sortie console
---------------------
tab1: [ 1 2 3 4 5 ]
tab2: [ 10 20 30 ]
Resultat: [ 10 20 30 40 50 20 40 60 80 100 30 60 90 120 150 ]
*/
```