#include<iostream>;
using namespace std;
#include<clocale>;

int main(void){
	setlocale(LC_ALL, "Spanish");
    int mayor_promedio = 0, grupo_promedio, numero, x;

    for (x=1; x<=10; x++) {
        cout << "Ingrese un número: ";
        cin >> numero;
        int suma = 0, contador = 0, minimo = 0, minimo_grupo = 0, minimo_posicion = 0, promedio = 0;

        while (numero != 0) {
            contador ++;
            suma += numero;

            if (contador == 1 || numero < minimo) {
                minimo = numero;
                minimo_grupo = x;
                minimo_posicion = contador;
            }
            cout << "Ingrese un número: ";
            cin >> numero;
        }
        promedio = suma/contador;
        if (promedio > mayor_promedio) {
            mayor_promedio = promedio;
            grupo_promedio = x;
        }
        cout << "El grupo " << minimo_grupo << " tiene un valor mínimo de " << minimo << " en la posición " << minimo_posicion << endl;
    }

    cout << "El mayor promedio es " << mayor_promedio << " correspondiente al grupo " << grupo_promedio << endl;

	return 0;
}
