//fecha: 9/07/24
////Autor:Lopez Quiroz Wagner
//tema: Diseñe la función que busca un número entero y devuelve la cantidad de veces que existe ese número en el vector.
#include <iostream>
#include <vector>

using namespace std;

// Función que cuenta cuántas veces aparece un número en un vector
int contarNumero(const vector<int>& vec, int num) {
    int contador = 0;
    for(int i = 0; i < vec.size(); i++) {
        if(vec[i] == num) {
            contador++;
        }
    }
    return contador;
}

int main() {
    // Definir un vector de enteros
    vector<int> miVector = {1, 2, 3, 4, 2, 5, 2, 3, 6};

    // Llamar a la función contarNumero y mostrar los resultados
    int numeroABuscar1 = 2;
    int cuenta1 = contarNumero(miVector, numeroABuscar1);
    cout << "El número " << numeroABuscar1 << " aparece " << cuenta1 << " veces en el vector." << endl;

    int numeroABuscar2 = 3;
    int cuenta2 = contarNumero(miVector, numeroABuscar2);
    cout << "El número " << numeroABuscar2 << " aparece " << cuenta2 << " veces en el vector." << endl;

    // Segunda serie de llamadas a la función contarNumero con otros valores
    int numeroABuscar3 = 4;
    int cuenta3 = contarNumero(miVector, numeroABuscar3);
    cout << "El número " << numeroABuscar3 << " aparece " << cuenta3 << " veces en el vector." << endl;

    int numeroABuscar4 = 5;
    int cuenta4 = contarNumero(miVector, numeroABuscar4);
    cout << "El número " << numeroABuscar4 << " aparece " << cuenta4 << " veces en el vector." << endl;

    return 0;
}
