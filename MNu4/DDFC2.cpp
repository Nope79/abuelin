// Nope79
// DDFC DIFERENCIAS DIVIDIDAS FINITAS CERRADAS - MAXIMA EXACTITUD
#include <bits/stdc++.h>
using namespace std;

double h = 0.001;

double f(double x){
	return (3 * x * x * x) - (3 * x * x) + (6 * x) - 10; // La función es cóncava hacia abajo (convexa) antes de cóncava hacia arriba (cónvexa) después de 
	//return (x * x) - (4 * x) + 3;
	//return (2 * x * x * x) + (3 * x * x) + (9 * x) + 4;
}

double ddfc(double x){
	return ((-f(x + (2 * h)) + (16 * f(x + h)) - (30 * f(x)) + (16 * f(x-h)) - (f(x - (2 * h)))) / (12 * h * h));
}

int main() {
	
	cout << fixed << setprecision(25);

	cout << "Ingrese la cantidad de valores a procesar... ";
	int n;
	cin >> n;

	for(int i = 0; i < n; i++){

		double x;
		cout << "Ingrese el valor de xi... ";
		cin >> x;

		double res = ddfc(x);

		cout << "Segunda derivada de xi: " << res << ". Naturaleza: ";
		
		if(res > 0){
			cout << "Concava.";
		}
		
		else if(res < 0){
			cout << "Convexa.";
		}else{
			cout << "Nula.";
		}

		cout << endl;

		cout << endl;
	}

	return 0;
}
