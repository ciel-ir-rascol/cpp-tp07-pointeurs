#include <iostream>
using namespace std;

string reverseString(string& chaineAinverser){
    
    // Codez ici votre fonction !
    
}

int main(){
    string chaine{"Hello, world!"};
    string chaineRetournee{};

    cout << "Chaine de caracteres avant inversion :" << chaine << endl;

    chaineRetournee = reverseString(chaine);

    cout << endl << "Chaine de caractere apres inversion :" << chaineRetournee;

    return 0;
}
