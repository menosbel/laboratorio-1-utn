//Nombre:
//TP Nº:
//Ejercicio Nº:
//Comentarios:

#include<iostream>;
using namespace std;

int main(void){
    int minutos_total, dias, horas, minutos;
    cout << "Minutos: ";
    cin >> minutos_total;

    dias = minutos_total / 1440;

    if(minutos_total % 1440 != 0){
        horas = (minutos_total - (dias * 1440)) / 60;

        if(horas % 60 != 0){
          minutos = minutos_total - (dias * 1440) - (horas * 60);
        }
    }

    cout << minutos_total << " minutos equivalen a " << dias << " dias, " << horas << " horas y " << minutos << " minutos.";

	return 0;
}
