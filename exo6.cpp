#include <iostream>

using namespace std;


int * moulinette(int* array1, int taille1, int* array2, int taille2) {
    
    // Codez ici votre fonction moulinette !

}


void display(int* array, int taille){

    // Codez ici votre fonction display

}


int main() {
    const int tailleTab1 {5};
    const int tailleTab2 {3};
    
    int tab1[] {1,2,3,4,5};
    int tab2[] {10,20,30};
    
    cout << "tab1: " ;
    display(tab1,tailleTab1);
    
    cout << "tab2: " ;
    display(tab2,tailleTab2);
    
    int *resultTab = moulinette(tab1,tailleTab1,tab2,tailleTab2);
    int resultTaille {tailleTab1*tailleTab2};
    
    cout << "Resultat: " ;
    display(resultTab,resultTaille);
    
    delete [] resultTab;
    cout << endl;
    
    return 0;
}

