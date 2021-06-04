//Nombre:
//TP Nº:
//Ejercicio Nº:
//Comentarios:

#include<iostream>;
using namespace std;

int main(void){
    int num1, num2;
    cout << "Ingrese un numero: ";
    cin >> num1;
    cout << "Ingrese otro numero: ";
    cin >> num2;

    if (num1 % num2 == 0){
        cout << num1 << " es multiplo de " << num2;
    } else {
        cout << num1 << " no es multiplo de " << num2;
    }

	return 0;
}
