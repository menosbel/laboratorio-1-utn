//Nombre:
//TP Nº:
//Ejercicio Nº:
//Comentarios:

#include<iostream>;
using namespace std;
#include <clocale>

int main(void){
    setlocale(LC_ALL, "Spanish");
    int num;
    cout << "Ingrese un número: ";
    cin >> num;

    if (num > 0) {
        cout << "El número es positivo.";
    } else if (num < 0 ) {
        cout << "El número es negativo.";
    } else if (num == 0) {
        cout << "El número es igual a cero.";
    }


	return 0;
}
