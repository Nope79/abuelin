#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double fun(double x){
	return sqrt((x * x) - x) - (x * x);
}

double S(double a, double b, double h, int n){
	
	double I = (3 * h) / 8;
	
	double z1 = fun(a), z2 = 0, z3 = 0, z4 = 0, z5 = fun(b);
	
	for(int i = 1; i <= n-2; i+=3){
		
		z2 += fun(a + (h * i));
	}
	
	z2 *=3;
	
	for(int i = 2; i <= n-1; i+=3){
		
		z3 += fun(a + (h * i));
	}
	z3 *=3;
	
	for(int i = 3; i <= n-3; i+=3){
		
		z4 += fun(a + (h * i));
	}
	z4 *= 2;
	
	double z = z1 + z2 + z3 + z4 + z5;
	
	I *= z;
	
	return I;
}

int main(){
	
	cout << fixed << setprecision(25);
	
	int n;
	double a, b, h;
	
	cout << "Ingrese el numero de segmentos(multiplos de 3)...";
	cin >> n;
	cout << "Ingrese el limite inferior y superior (a y b)...";
	cin >> a >> b;
	
	h = (b - a) / n;
	cout << "El valor de h (Paso) es de " << h << endl;
	
	cout << "Ahora, vamos a calcular el area de la integral desde a hasta b con los datos calculados y la funcion previamente escrita.." << endl;
	
	cout << "I es aproximadamente: " << S(a, b, h, n) << endl;
	
	cout << "f5->" << fun(a + (5*h));

	return 0;
}