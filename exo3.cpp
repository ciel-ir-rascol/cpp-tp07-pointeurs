#include <iostream>
using namespace std;

int findMax(int* tabPtr, int taille){
    
    // Codez ici votre fonction !
    
}

int main(){
    int tab[]{2,10,12,42,6,7,8,36};
    int tailleTab{8};

    cout << "Elements du tableau :";
    for(int i{0};i<tailleTab;i++){
        cout << tab[i] << " ";
    }

    cout << endl << "Plus grand element du tableau : " << findMax(tab,tailleTab);

    return;
}