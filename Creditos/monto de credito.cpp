#include <iostream>
#include <iomanip> //se usa para agregar espacios en la salida

using namespace std;

int main(){ //inicio de la función principal
	float S_k=0; //suma actual
	float I_k=0; //interés actual calculado sobre la suma
	int periodos=0; //períodos del préstamo
	float interes=0;
	
	cout<<"Monto del prestamo? ";
	cin>>S_k; //para el período 0 S_k es igual al monto del préstamo
	
	cout<<"Periodos? ";
	cin>>periodos;
	
	cout<<"Interes? ";
	cin>>interes;
	
	//Encabezado de la salida
	cout<<"Periodo"<<setw(10)<<"Interes"<<setw(13)<<"Suma"<<endl;
	cout<<"================================="<<endl;
	
	for(int contador=0;contador<periodos;contador++){
		I_k=S_k*(interes/100); //cálculo del interés
		S_k=S_k+I_k; //Cálculo del monto adeudado al período
		cout<<contador+1<<setw(15)<<I_k<<setw(15)<<S_k<<endl;
	}
	
	return 0;
} //fin de la función principal