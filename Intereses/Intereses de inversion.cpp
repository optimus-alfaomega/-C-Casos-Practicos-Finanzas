#include <iostream>
#include <stdlib.h>
using namespace std;

/**
* 1. Un hombre desea saber cu�nto dinero se genera por concepto de intereses
sobre la cantidad que tiene en inversi�n en el banco. El decidir� reinvertir los
interese siempre y cuando estos excedan a $7000. Y en ese caso desea saber
cu�nto dinero tendr� finalmente en su cuenta.
*/
int main(int argc, char *argv[]) {
	system("color 03");
	float interes, inversion, valor_interes;
	double total= 0;
	
	cout << "Cu�l es el valor de la inversi�n que tiene en el banco: ";
	cin >> inversion;
	
	cout << "�Cu�l es el porcentaje de inter�s del banco?: ";
	cin >> valor_interes;
	
	interes = inversion * (valor_interes / 100);
	
	if (interes > 7000) {
		cout << "Es factible que invierta. El valor del inter�s es: " << interes;
		total = inversion + interes + interes*(valor_interes/100);
		cout << "\nAl reinvertir tendr� una gannancia de: " << total;
	} else
		cout << "NO es recomendable reinvertir. Los interes son de: " << interes;
	
	return 0;
}

