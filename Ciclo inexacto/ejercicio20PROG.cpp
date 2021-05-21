//Nombre:
//TP Nº:
//Ejercicio Nº:
//Comentarios:

#include<iostream>;
using namespace std;
#include<clocale>;

int main(void){
	setlocale(LC_ALL, "Spanish");

	int cliente, localidad, kw, costo, costo_fijo = 100;
	int mc1 = 0, mc2 = 0, mc3 = 0, tor1 = 0, tor2 = 0, tor3 = 0;
	int mac1_cl, mac2_cl, mac2_cl;
	int mec_cliente, mec = 0;
	int clientes = 0;


	cout << "Ingrese el número de cliente: ";
	cin >> cliente;

	clientes += 1;

	while (cliente != 0) {
        cout << "Ingrese el número de localidad (1, 2 o 3): "<< endl;
        cin >> localidad;
        cout << "Ingrese los KW consumidos: "<< endl;
        cin >> kw;

        if (kw <= 100) {
            costo = (kw*100) + costo_fijo;
        } else if (kw >= 101 && kw <= 200) {
            costo = 100*10 + (kw-100)*12 + costo_fijo;
        } else if (kw >= 201) {
            costo= 100*10 + 100*12 + (kw-200)*15 + costo_fijo;
        }

        switch(localidad){
            case 1:
                tor1 += costo;
                if (kw > mc1){
                    mc1 = kw;
                    mac1_cl = cliente;
                }
                break;
            case 2:
                tor2 += costo;
                if (kw > mc2){
                    mc2 = kw;
                    mac2_cl = cliente;
                }
                break;
            case 3:
                tor3 += costo;
                if (kw > mc3){
                    mc3 = kw;
                    mac3_cl = cliente;
                }
                break;
        }

        if (cliente == 1) {
            mec_cliente = cliente;
            mec = kw;
        } else if (kw > mec && kw > 0{
            mec = kw;
            mec_cl = cliente;
        }

        cout << "Ingrese el número de cliente: " << endl;
        cin >> cliente;

        clientes += 1;
	}

	cout << "Cliente que consumió mayor cantidad de KW por localidad: " << endl;
	cout << "Localidad 1: " << mac1_cl << endl;
	cout << "Localidad 2: " << mac2_cl<< endl;
	cout << "Localidad 3: " << mac3_cl << endl;

	cout << "Total de recaudación por localidad: " << endl;
	cout << "Localidad 1: " << tor1 << endl;
	cout << "Localidad 2: " << tor2 << endl;
	cout << "Localidad 3: " << tor3 << endl;

	cout << "Cliente que consumió menos: " << mec_cliente;

	return 0;
}
