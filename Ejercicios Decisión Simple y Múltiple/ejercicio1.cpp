//Nombre:
//TP N�:
//Ejercicio N�:
//Comentarios:

#include<iostream>;
using namespace std;
#include <clocale>

int main(void){
    setlocale(LC_ALL, "Spanish");
    int num;
    cout << "Ingrese un n�mero: ";
    cin >> num;

    if (num > 0) {
        cout << "El n�mero es positivo.";
    } else if (num < 0 ) {
        cout << "El n�mero es negativo.";
    } else if (num == 0) {
        cout << "El n�mero es igual a cero.";
    }


	return 0;
}
