#include <iostream>
using namespace std;

void swapPointers(int* ptr1, int* ptr2) {

// Fonction à coder !

}

int main(){

    // ⚠️ Ne rien modifier ici !

    int a {1};
    int b {2};

    int *ptrA{&a};
    int *ptrB{&b};
    
    cout << "Avant changement a = " << a;
    cout << "Avant changement b = " << b;
    
    swapPointers(ptrA, ptrB);

    cout << "Après changement a = " << a;
    cout << "Après changement b = " << b;

    return 0;
}