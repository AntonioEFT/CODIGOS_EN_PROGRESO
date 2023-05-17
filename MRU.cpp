#include <iostream>

using namespace std;

int main() {
    int opcion;
    float velocidad, tiempo, distancia;

    cout << "Selecciona la opcion que quieras calcular:\n";
    cout << "1. Distancia\n";
    cout << "2. Velocidad\n";
    cout << "3. Tiempo\n";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingresa la velocidad en metros por segundo: ";
            cin >> velocidad;
            cout << "Ingresa el tiempo en segundos: ";
            cin >> tiempo;
            distancia = velocidad * tiempo;
            cout << "La distancia es: " << distancia << " metros.\n";
            break;
        case 2:
            cout << "Ingresa la distancia en metros: ";
            cin >> distancia;
            cout << "Ingresa el tiempo en segundos: ";
            cin >> tiempo;
            velocidad = distancia / tiempo;
            cout << "La velocidad es: " << velocidad << " metros por segundo.\n";
            break;
        case 3:
            cout << "Ingresa la distancia en metros: ";
            cin >> distancia;
            cout << "Ingresa la velocidad en metros por segundo: ";
            cin >> velocidad;
            tiempo = distancia / velocidad;
            cout << "El tiempo es: " << tiempo << " segundos.\n";
            break;
        default:
            cout << "Opcion invalida.\n";
    }

    return 0;
}

