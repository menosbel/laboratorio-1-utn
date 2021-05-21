//Nombre:
//TP Nº:
//Ejercicio Nº:
//Comentarios:

#include<iostream>;
using namespace std;
#include<clocale>;

int main(void){
	setlocale(LC_ALL, "Spanish");
	int consumo, costo;

	cout << "Consumo: ";
	cin >> consumo;

	if (consumo<=100){
        costo = consumo*10;
	} else if(consumo>100 && consumo<=200){
        costo = 100*10 + (consumo - 100)*12;
	} else if(consumo>200){
        costo = 100*10 + 100*12 + (consumo - 200) *15;
	}

	cout << "Costo: " << costo;

	return 0;
}
