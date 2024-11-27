// Nope79
// DDFC DIFERENCIAS DIVIDIDAS FINITAS CERRADAS - MAXIMA EXACTITUD
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

double h = 0.001;

double f(double x){
	return (3 * x * x * x) - (3 * x * x) + (6 * x) - 10;
	//return x*x;
	//return ((sqrt((x*x - x))) + (x * x));
	//return ((3 * x * x * x) - (3 * x * x) + 4);
	//return (3 * x * x * x) - (3 * x * x) + (6 * x) -20;
}

double ddfc(double x){
	return ((-f(x + (2 * h)) + (8 * f(x + h)) - (8 * f(x-h)) + (f(x - (2 * h)))) / (12 * h));
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

		cout << "Primera derivada de xi: " << res << ". Pendiente: ";
		
		if(res > 0){
			cout << "Positiva.";
		}
		
		else if(res < 0){
			cout << "Negativa.";
		}else{
			cout << "Nula.";
		}

		cout << endl;

		cout << endl;
	}

	return 0;
}
