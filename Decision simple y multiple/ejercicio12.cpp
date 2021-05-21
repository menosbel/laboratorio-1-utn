//Nombre:
//TP Nº:
//Ejercicio Nº:
//Comentarios:

#include<iostream>;
using namespace std;
#include<clocale>;

int main(void){
	setlocale(LC_ALL, "Spanish");
	int a, b, c;

	cout << "Ingrese tres números: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	if (a>b && a<c) {
	    cout << "Numero del medio: " << a;
	} else if (a < b && a > c) {
        cout << "Numero del medio: " << a;
	} else if (b < a && b > c) {
        cout << "Numero del medio: " << b;
	} else if (b > a && b < c) {
        cout << "Numero del medio: " << b;
	} else if (c < b && c > a) {
        cout << "Numero del medio: " << c;
	} else if (c > b && c < a) {
        cout << "Numero del medio: " << c;
	}

	return 0;
}
