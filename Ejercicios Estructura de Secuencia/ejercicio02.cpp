#include <iostream>
using namespace std;
#include <clocale>

int main(void){
    setlocale(LC_ALL, "Spanish");

    int num1, num2, aux;

    cout << "Ingrese un número: ";
    cin >> num1;
    cout << "Ingrese otro número: ";
    cin >> num2;

    aux = num2;
    num2 = num1;
    num1 = aux;

    cout << "Num 1: " << num1 << endl;
    cout << "Num 2: " << num2;


    return 0;
}
