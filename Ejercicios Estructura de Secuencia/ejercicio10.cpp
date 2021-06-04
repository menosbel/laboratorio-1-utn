//Nombre:
//TP Nº:
//Ejercicio Nº:
//Comentarios:

#include<iostream>;
using namespace std;

int main(void){
    int horas_total, dias, horas;

    cout << "Horas: ";
    cin >> horas_total;

    dias = horas_total / 24;
    if(horas_total % 24 != 0){
        horas = horas_total - (dias * 24);
    }

    cout << horas_total << " horas equivalen a " << dias << " dias y " << horas << " horas.";

	return 0;
}
