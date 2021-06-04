//Nombre:
//TP Nº:
//Ejercicio Nº:
//Comentarios:

#include<iostream>;
using namespace std;
#include<clocale>;

int main(void){
	setlocale(LC_ALL, "Spanish");
    int num, maximo, positivos = 0, contador = 0;

    while (positivos < 2) {
        contador += 1;

        cout << "Ingrese un número: ";
        cin >> num;

     if (num > 0) {
        positivos += 1;
    } else {
        positivos = 0;
    }


    if (contador == 1) {
        maximo = num;
    } else {
        if (positivos != 2){
            if (num > maximo) {
                maximo = num;
            }
        }
    }
    }

    cout << "Máximo: " << maximo;


	return 0;
}
