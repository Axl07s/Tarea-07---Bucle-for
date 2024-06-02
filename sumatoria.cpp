#include <iostream>
using namespace std;

int main() {
    // Mensaje de introducción
    cout << "5) Este programa realiza la sumatoria de los números desde 1 hasta 100." << endl;

    // Acumulador para almacenar la sumatoria
    int suma = 0;

    // Bucle para sumar los números del 1 al 100
    for (int i = 1; i <= 100; ++i) {
        suma += i; // Suma el número actual al acumulador
    }

    // Mostrar el resultado
    cout << "La sumatoria de los números del 1 al 100 es: " << suma << endl;

    return 0;
}
