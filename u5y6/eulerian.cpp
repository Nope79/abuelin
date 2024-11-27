// nope79

#include <iostream>
#include <iomanip>

using namespace std;

double prim(double x, double y){
	return (3 * x) - (x * y);
	//return 4 - (2 * x) - y; 
	//return -3 * ((2 * x) -4); //x = 0, y = 3, f = 1, h = 0.5
	//return 0;
}

int main(){
	
	// yi+1 = yi + f´(xi, yi)h
	
	cout << fixed << setprecision (10);	
	while(true){
		double xz = 0, yz = 0, y = 0, fin = 0, hc = 0;
	
	cout << "x ";
	cin >> xz;
	
	cout << "y ";
	cin >> yz;
	
	cout << "h ";
	cin >> hc;
	
	cout << "fin ";
	cin >> fin;
	
	while(xz < fin){
		
		y = yz + (prim(xz, yz) * hc);
		cout << "X: " << xz << "	Y: " << yz << "		Yi: " << y << endl;
		xz += hc;
		yz = y;
	}
	
	cout << "f(x)        Y" << endl;
	cout << xz << "	 " << y << endl;
	}
	
	
	
	return 0;
}