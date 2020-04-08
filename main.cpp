#include <iostream>
#include<string>
#include<math.h>

using namespace std;

int main() 
{
	string a;
	int b;
	string c;
	int d;
	string e;

	cout << "INSERTE SU NOMBRE: ";
	getline(cin, a);
	cout << endl;
	cout << "INSERTE SU EDAD: ";
	cin >> b;
	cout << endl;
	cout << "INSERTE SU DIRECCION: ";
	cin >> c;
	cout << endl;
	cout << "INSERTE SU TELEFONO: ";
	cin >> d;
	cout << endl;
	cout << "INSERTE SU HOBBIE: ";
	cin >> e;
	cout << endl;

	cout << "-" << a << endl;
	cout << "-" << b << endl;
	cout << "-" << c << endl;
	cout << "-" << d << endl;
	cout << "-" << e << endl;

	
}

 /*int main()
{
	float a,b,c,d,e,f,g,h;
	cout << "INGRESE SU PRIMERA VARIABLE: ";
	cin >> a;
	cout << endl;
	cout << "INGRESE SU SEGUNDA VARIABLE: ";
	cin >> b;
    cout << endl;
	c = a + b;
	d = a - b;
	e = a * b;
	f = a / b;
	g = sqrt(a);
	h = sqrt(b);
	cout << a << "+" << b << "=" << c;
	cout << endl;
	cout << a << "-" << b << "=" << d;
	cout << endl;
	cout << a << "*" << b << "=" << e;
	cout << endl;
	cout << a << "/" << b << "=" << f;
	cout << endl;
	cout << g;
	cout << h;
	return 0;

}*/
 

/*int main() {
	int w;
	double x;
	double y;
	double z;
	double areacirculo;
	double areatriangulo;
	double areacuadrado;

	cout << "<<<AREA DEL CIRCULO>>>" << endl;
	cout << "ingresa el radio del circulo: ";
	cin >> z;
	areacirculo = 3.14 * (z * z);
	cout << "el area del circulo es : " << areacirculo << endl;
	cout << "<<<AREA DE UN TRIANGULO>>>" << endl;
	cout << "INGRESA LA BASE DEL TRIANGULO: ";
	cin >> x;
	cout << "INGRESA LA ALTURA DEL TRIANGULO: ";
	cin >> y;
	areatriangulo = (x * y) / 2;
	cout << "el area del tringulo es: " << areatriangulo << endl;
	cout << "<<<AREA DE UN CUADRADO>>>" << endl;
	cout << "ingresa el lado del cuadrado: ";
	cin >> w;
	areacuadrado = w ^ 2;
	cout << "EL AREA DEL CUADRADO ES: " << areacirculo << endl;
	return 0;
}
*/

