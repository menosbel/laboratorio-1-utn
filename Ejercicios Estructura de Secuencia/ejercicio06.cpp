//Nombre:
//TP Nº: 1
//Ejercicio Nº: 6
//Comentarios:

#include<iostream>;
using namespace std;

int main(void){
    float semana1, semana2, semana3, semana4;
    float recaudacion_total, recaudacion_promedio, porc_semana1, porc_semana2, porc_semana3, porc_semana4;
    cout << "Reacudacion semana 1: ";
    cin >> semana1;
    cout << "Reacudacion semana 2: ";
    cin >> semana2;
    cout << "Reacudacion semana 3: ";
    cin >> semana3;
    cout << "Reacudacion semana 4: ";
    cin >> semana4;

    recaudacion_total = semana1 + semana2 + semana3 + semana4;
    recaudacion_promedio = recaudacion_total /4;
    porc_semana1 = semana1 * 100 / recaudacion_total;
    porc_semana2 = semana2 * 100 / recaudacion_total;
    porc_semana3 = semana3 * 100 / recaudacion_total;
    porc_semana4 = semana4 * 100 / recaudacion_total;

    cout << "Recaudacion promedio: " << recaudacion_promedio << endl;
    cout << "Porcentaje semana 1: " << porc_semana1 << "%." << endl;
    cout << "Porcentaje semana 2: " << porc_semana2 << "%." << endl;
    cout << "Porcentaje semana 3: " << porc_semana3 << "%." << endl;
    cout << "Porcentaje semana 4: " << porc_semana4 << "%." << endl;

	return 0;
}
