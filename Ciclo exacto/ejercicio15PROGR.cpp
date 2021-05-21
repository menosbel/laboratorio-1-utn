//Nombre:
//TP Nº:
//Ejercicio Nº:
//Comentarios:

#include<iostream>;
using namespace std;
#include<clocale>;

int main(void){
	setlocale(LC_ALL, "Spanish");

    int n, num1, num2, x;

    for (x=0; x<5; x++){
        cout << "Ingrese un número: ";
        cin >> n;

        if (x == 0) {
            num1 = n;
        } else if (n > num1) {
            num2 = num1;
            num1 = n;
        } else if (num2) {
            if (n > num2) {
             num2 = n;
            }
        } else {
            num2 = n;
        }
    }

    cout << "Maximo: " << num1 << endl;
    cout << "Siguiente: " << num2;

	return 0;
}
