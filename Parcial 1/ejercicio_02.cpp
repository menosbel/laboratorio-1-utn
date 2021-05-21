#include<iostream>;
using namespace std;
#include<clocale>;

int main(void){
	setlocale(LC_ALL, "Spanish");

    int codigo_arbol, edad_arbol, estado_arbol, edad_mas_alto_no_peligroso, altura_mas_alto_no_peligroso=0, total_arboles;
    int arbol_optimo=0, arbol_satisfactorio=0, arbol_enfermo=0, arbol_peligroso=0;
    float altura_arbol, total_altura=0, promedio_altura;

    cout << "Ingrese el c�digo del �rbol: ";
    cin >> codigo_arbol;

    while (codigo_arbol > 0) {
        total_arboles++;
        cout << "Edad del �rbol: ";
        cin >> edad_arbol;
        cout << "Altura del �rbol: ";
        cin >> altura_arbol;
        cout << "Estado general del �rbol (1 - �ptimo, 2 - Satisfactorio, 3 - Enfermo, 4 - Peligroso): ";
        cin >> estado_arbol;

        if (estado_arbol != 4) {
            if (altura_arbol > altura_mas_alto_no_peligroso) {
                altura_mas_alto_no_peligroso = altura_arbol;
                edad_mas_alto_no_peligroso = edad_arbol;
            }
        } else {
            arbol_peligroso++;
        }


        if (estado_arbol == 1) {
            arbol_optimo++;
        } else if (estado_arbol == 2) {
            arbol_satisfactorio++;
        } else if (estado_arbol == 3) {
            arbol_enfermo++;
        }

        total_altura += altura_arbol;
        cout << endl;
        cout << "Ingrese el c�digo del �rbol: ";
        cin >> codigo_arbol;
    }

    promedio_altura = total_altura / total_arboles;

    if (arbol_optimo < arbol_satisfactorio && arbol_optimo < arbol_enfermo && arbol_optimo < arbol_peligroso) {
        cout << "Hay menos �rboles en estado �ptimo." << endl;
    } else if (arbol_satisfactorio < arbol_optimo && arbol_satisfactorio < arbol_enfermo && arbol_satisfactorio < arbol_peligroso) {
        cout << "Hay menos �rboles en estado satisfactorio." << endl;
    } else if (arbol_enfermo < arbol_optimo && arbol_enfermo < arbol_satisfactorio && arbol_enfermo < arbol_peligroso) {
        cout << "Hay menos �rboles en estado enfermo." << endl;
    } else {
        cout << "Hay menos �rboles en estado peligroso" << endl;
    }


    cout << "La altura del �rbol no peligroso m�s alto es: " << altura_mas_alto_no_peligroso << ". Y su edad es: " << edad_mas_alto_no_peligroso << endl;
    cout << "El promedio de altura de los �rboles es de: " << promedio_altura << endl;


	return 0;
}
