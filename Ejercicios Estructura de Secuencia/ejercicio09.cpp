//Nombre:
//TP Nº:
//Ejercicio Nº:
//Comentarios:

#include<iostream>;
using namespace std;

int main(void){
    int minutos_total, horas, minutos;

    cout << "Minutos: ";
    cin >> minutos_total;

    horas = minutos_total / 60;
    if(minutos_total % 60 != 0){
        minutos = minutos_total - (horas * 60);
    }

    cout << minutos_total << " minutos equivalen a " << horas << " horas y " << minutos << " minutos";

	return 0;
}
