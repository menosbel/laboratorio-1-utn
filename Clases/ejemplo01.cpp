#include <iostream>
using namespace std;
#include <clocale>

int main(void){
    setlocale(LC_ALL, "Spanish");
    int num1, num2, resultado;
    cout << "Ingresar el primer n�mero: ";
    cin >> num1;
    cout << "Ingresar el segundo n�mero: ";
    cin >> num2;
    resultado = num1 + num2;
    cout << "El resultado es: ";
    cout << resultado;

    return 0;
}
