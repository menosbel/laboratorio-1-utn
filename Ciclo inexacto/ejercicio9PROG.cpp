//Nombre:
//TP Nº:
//Ejercicio Nº:
//Comentarios:

#include<iostream>;
using namespace std;
#include<clocale>;

int main(void){
	setlocale(LC_ALL, "Spanish");

    int num, maximo, contador = 0, posicion;

	cout << "Ingrese un número. (0 termina el programa): ";
	cin >> num;

	while (num != 0) {
        contador += 1;
        cout << contador << endl;

        if (contador == 1) {
            maximo = num;
            posicion = contador;
        } else {
            if (num > maximo) {
                maximo = num;
                posicion = contador;
            }
        }
        cout << "Ingrese otro número: ";
        cin >> num;
	}

	cout << "El mayor número ingresado es: "<< maximo << endl;
	cout << "Fue ingresado en la posición " << posicion;

	return 0;
}
