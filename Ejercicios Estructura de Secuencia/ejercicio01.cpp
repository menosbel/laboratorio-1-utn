#include <iostream>
using namespace std;
#include <clocale>

int main(void){
    setlocale(LC_ALL, "Spanish");

    int cantidad_horas, valor_hora, sueldo;

    cout << "Ingrese la cantidad de horas trabajadas: ";
    cin >> cantidad_horas;
    cout << "Ingrese el valor de la hora: ";
    cin >> valor_hora;
    sueldo = cantidad_horas * valor_hora;
    cout << "El sueldo es: " << sueldo;


    return 0;
}
