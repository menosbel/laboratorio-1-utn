//Nombre:
//TP Nº: 1
//Ejercicio Nº: 5
//Comentarios:

#include<iostream>;
using namespace std;

int main(void){

    int A, B, C, total;
    float porc_A, porc_B, porc_C;
    cout << "Cantidad vendida de A: ";
    cin >> A;
    cout << "Cantidad vendida de B: ";
    cin >> B;
    cout << "Cantidad vendida de C: ";
    cin >> C;

    total = A + B + C;
    porc_A = (float)A * 100 / total;
    porc_B = (float)B * 100 / total;
    porc_C = (float)C * 100 / total;

    cout << "A: " << porc_A << "%. B: " << porc_B << "%. C: " << porc_C << "%.";

	return 0;
}
