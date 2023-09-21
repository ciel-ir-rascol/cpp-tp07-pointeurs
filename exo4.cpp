#include <iostream>
using namespace std;

void reverseTab(int* tabPtr, int taille){
    
    // Codez ici votre fonction !
    
}

int main(){
    int tab[]{1,2,3,10,20,30};
    int tailleTab{6};

    cout << "Elements du tableau avant inversion :" << endl;
    for(int i{0};i<tailleTab;i++){
        cout << tab[i] << " ";
    }

    reverseTab(tab,tailleTab);

    cout << endl << "Elements du tableau après inversion :" << endl;
    for(int i{0};i<tailleTab;i++){
        cout << tab[i] << " ";
    }

    return 0;
}
