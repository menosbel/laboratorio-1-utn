//Nombre:
//TP N�:
//Ejercicio N�:
//Comentarios:

#include<iostream>;
using namespace std;
#include<clocale>;

int main(void){
	setlocale(LC_ALL, "Spanish");
	int a, b, c;
	cout << "Ingresar tres n�meros enteros: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	if (a!=b && a!=c && b!=c){
        cout << "Los tres n�meros son distintos entre s�";
	}

	return 0;
}
