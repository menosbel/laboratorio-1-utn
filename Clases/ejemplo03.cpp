//Nombre:
//TP Nº:
//Ejercicio Nº:
//Comentarios:

#include<iostream>;
#include<iomanip>
using namespace std;

int main(void){
    int dinero;
    int personas;
    float resultado;

    cout << "Ingresar la cantidad de dinero: ";
    cin >> dinero;
    cout << "Ingresar la cantidad de personas: ";
    cin >> personas;

    resultado = (float)dinero/personas;

    cout << "Le corresponde a cada uno $"<<resultado<<endl;

    float n1, n2, total;

    cout << "Ingrese numero 1: "<<endl;
    cin >> n1;
    cout << "Ingrese numero 2: "<<endl;
    cin >> n2;

    if(n2 == 0){

        cout << "Valores invalidos";
        return 0;

    }

    total = n1/n2;

    cout << "El resultado es: "<<fixed<<setprecision(2)<<total<<endl;


	return 0;
}
