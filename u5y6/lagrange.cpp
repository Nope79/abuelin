// Tarea 1: Lagrange
// Puntos: (1, 0), (3, 1.09), (5, 1.60), (9, 2.14)
// fn(x) = sumatoria desde 0 hasta n de (Li(x) * f(xi));
// Donde n es el grado del polinomio
// y Li(x) es la multiplicatoria de 0 a n de (x-xj) / (xi-xj)
// x = el valor de x que evaluamos

#include <bits/stdc++.h>
using namespace std;

int main() {

	vector <double> x{1, 3, 5, 9};
	vector <double> y{0, 1.09, 1.60, 2.19};
	vector <double> T;
	vector <double> L;
	vector <double> f;

	int n = 3;
	double z = 3;

	double sumatoria = 0;

	for(int i = 0; i <= n; i++){

		double P = 1;

		for(int j = 0; j <= n; j++){
			if(j != i){
				P *= ((z - x[j]) / (x[i] - x[j]));
			}
		}

		L.push_back(P);

		f.push_back(y[i]);

		sumatoria += (L[i] * f[i]);
		T.push_back(L[i] * f[i]);
	}

	cout << sumatoria << endl;

	for(double a : L){
		cout << a << " ";
	}

	cout << endl;

	for(double b : f){
		cout << b << " ";
	}
	
	cout << "Terminos: " << endl;
	for(double t : T){
		cout << t << "		";
	}
	
	return 0;
}
