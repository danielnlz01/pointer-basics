#include <iostream>
#include <string>

using namespace std;

int main() {
	int x = 90;
	cout << x << endl;

	// declara apuntador a entero
	int *x_ptr = &x; // obtiene dirección de memoria de &x
	cout << x_ptr << endl;

	// cuando se escribe *x_ptr se refiere a "x"

	// de manera indirecta llego al contenido de la dirección de memoria
	*x_ptr = *x_ptr + 5;
	cout << x << endl;

	return 0;
}