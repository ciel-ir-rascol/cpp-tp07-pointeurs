#include <iostream>
using namespace std;

void multiplicationAvecPointeur(int* ptr, int multiplier){
    
    // Codez ici votre fonction !
    
}

int main(){
    int nbr{2};
    int *ptrNbr{&nbr};

    int leMultiplicateur {10};

    cout << "Le contenu de nbr avant la multiplication est : " << nbr << endl;
    multiplicationAvecPointeur(ptrNbr,leMultiplicateur);
    cout << "Le contenu de nbr après la multiplication est : " << nbr << endl;

    return 0;
}