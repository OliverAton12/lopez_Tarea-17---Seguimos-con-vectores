//fecha: 9/07/24
////Autor:Lopez Quiroz Wagner
//tema: Diseñe la función que convierte un entero en su equivalente en binario. El resultado del número binario se debe guardar en un vector.

#include <iostream>
#include <vector>

// Función que convierte un número entero a su representación binaria y la almacena en un vector
void convertirABinario(int num, std::vector<int>& binario) {
    // Limpiar el vector para asegurarse de que esté vacío antes de empezar
    binario.clear();
    
    // Caso especial cuando el número es 0
    if (num == 0) {
        binario.push_back(0);
        return;
    }

    // Convertir el número a binario
    while (num > 0) {
        binario.insert(binario.begin(), num % 2);
        num = num / 2;
    }
}

// Función para imprimir el contenido del vector que representa el número binario
void imprimirBinario(const std::vector<int>& binario) {
    for (int bit : binario) {
        std::cout << bit;
    }
    std::cout << std::endl;
}

int main() {
    // Definir el vector que almacenará los números binarios
    std::vector<int> binario;

    // Llamar a la función convertirABinario y mostrar los resultados
    int numero1 = 10;
    convertirABinario(numero1, binario);
    std::cout << "El número " << numero1 << " en binario es: ";
    imprimirBinario(binario);

    int numero2 = 7;
    convertirABinario(numero2, binario);
    std::cout << "El número " << numero2 << " en binario es: ";
    imprimirBinario(binario);

    // Segunda serie de llamadas a la función convertirABinario
    int numero3 = 15;
    convertirABinario(numero3, binario);
    std::cout << "El número " << numero3 << " en binario es: ";
    imprimirBinario(binario);

    int numero4 = 0;
    convertirABinario(numero4, binario);
    std::cout << "El número " << numero4 << " en binario es: ";
    imprimirBinario(binario);

    return 0;
}
