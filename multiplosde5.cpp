#include <iostream>
using namespace std;

int main() {

    // Mensaje antes de inicializar el programa
    cout << "1) Este programa imprime los números múltiplos de 5 comprendidos entre 1 y 100" << endl;

    // Iterar desde 1 hasta 100
    for (int i = 1; i <= 100; i++) {
        // Verificar si el número es múltiplo de 5
        if (i % 5 == 0) {
            cout << i << endl; // Imprimir el número
        }
    }
    return 0;
}
