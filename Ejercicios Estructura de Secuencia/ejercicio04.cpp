//Nombre:
//TP Nº: 1
//Ejercicio Nº: 4
//Comentarios:

#include<iostream>;
#include<iomanip>
using namespace std;

int main(void){
    int asientos, pasajes_ocupados;
    float porcentaje_ocupacion, porcentaje_no_ocupacion;

    cout << "Ingrese la cantidad total de asientos: ";
    cin >> asientos;
    cout << "Ingrese la cantidad de pasajes ocupados: ";
    cin >> pasajes_ocupados;

    porcentaje_ocupacion = (float)pasajes_ocupados * 100 / asientos;
    porcentaje_no_ocupacion = 100 - porcentaje_ocupacion;

    cout << "Esta ocupado un "<<fixed<<setprecision(2) << porcentaje_ocupacion << "% del avion." << endl;
    cout << "Esta desocupado un "<<fixed<<setprecision(2) << porcentaje_no_ocupacion << "% del avion.";


	return 0;
}
