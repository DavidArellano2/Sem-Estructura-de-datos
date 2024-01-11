// Lopez Arellano Ricardo David
// Factorial de un numero
include<iostream>
using namespace std;

int main() {
	int fac;
	float numero;
	float x;
	cout << "Dame un numero: " << endl;
	cin >> numero;
	if (numero>0) {
		x = 1;
		fac = 1;
		while (x<=numero) {
			fac = fac*x;
			x = x+1;
		}
		cout << "El factorial del numero es " << numero << " = " << fac << endl;
	} else {
		cout << "El numero " << numero << "no se puede calcular" << endl;
	}
	return 0;
}
