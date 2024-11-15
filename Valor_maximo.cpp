#include <iostream>
#include <vector>

using namespace std;

// Funcion para obtener el valor maximo de una lista de numeros
int obtener_valor_maximo_de_lista(vector<int> lista_numeros)
{
    int max = 0;
    for (int numero: lista_numeros) {
        if (numero > max) {
            max = numero;
        }
    }
    return max;
}

int main()
{
    // Lista de numeros predefinida
    vector<int> lista_numeros = { 3, 5, 88, 156, -6 };
    // Mostrar el valor maximo de la lista de numeros 
    cout << "Valor maximo de la lista de numeros: "
    << obtener_valor_maximo_de_lista(lista_numeros)
    << endl;
    return 0;
}