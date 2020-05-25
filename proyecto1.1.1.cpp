/*
Autor: Nataly Morales
Modificacion: Francisco Suntaxi
Version: 1.1.1
*/
#include <iostream>

using namespace std;
int main() {

 char cadena [50];
    cout << "Escriba la frase a mostrar en pantalla:\n ";
    cin.getline(cadena,50,'\n');

    cout<< "\nSu frase es:\n ";
    cout << cadena << endl;

    return 0;

}
