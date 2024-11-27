#include <iostream>

using namespace std;

double fun(double x){
	return (3 * x * x * x) - (3 * x * x) + (6 * x) - 20;
}

double s(double a, double b, double h){
	
	double I = (b - a) * ((fun(a) + (3 * fun(a + h)) + (3 * fun(a + (2 * h))) + fun(b)) / 8);
}

int main(){
	
	double a, b, h;
	cout << "Ingrese el limite inferior y el superior... ";
	cin >> a >> b;
	h = (b - a) / 3;
	cout << "Valor de h... ";
	cout << h << endl;
	
	cout << "Solucion: " << s(a, b, h);
	
	return 0;
}