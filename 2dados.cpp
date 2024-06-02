#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int lanzar_dado() {
    return rand() % 6 + 1; // Genera un número entre 1 y 6
}

int main() {
    // Mensaje de introducción
    cout << "2) Este programa simula el lanzamiento de dos dados. Un jugador gana si ambos dados sacan el mismo número o si la suma de los números es 7." << endl;
    cout << "   Tienes 3 intentos para ganar." << endl;

    // Inicializa la semilla de los números aleatorios
    srand(time(0));

    // Bucle para dar 3 oportunidades al usuario
    for (int intento = 1; intento <= 3; intento++) {
        cout << "PULSE ENTER para tirar los dados";
        cin.ignore(); // Espera a que el usuario pulse ENTER

        int dado1 = lanzar_dado();
        int dado2 = lanzar_dado();

        cout << "Resultado del dado 1: " << dado1 << endl;
        cout << "Resultado del dado 2: " << dado2 << endl;

        if (dado1 == dado2 || dado1 + dado2 == 7) {
            cout << "¡FELICIDADES! GANASTE EN EL INTENTO #" << intento << endl;
            break; // Abandonar el bucle si el usuario gana
        } else {
            cout << "Inténtalo de nuevo." << endl;
        }
    }
    return 0;
}
