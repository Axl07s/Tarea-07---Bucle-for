#include <iostream>
using namespace std;

int main() {

    // Mensaje antes de inicializar el programa
 cout << "2) Este programa solicita al usuario una tabla de multiplicar. Y a continuación, imprime la tabla usando el siguiente formato:" << endl;

    int n;
    cout << "Ingrese el número para la tabla de multiplicar: ";
    cin >> n;

    // Iterar desde 1 hasta 12 para imprimir la tabla de multiplicar
    for (int i = 1; i <= 12; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}
