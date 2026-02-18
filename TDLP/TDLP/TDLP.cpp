#include <iostream>

int main()
{
	/*int num1, num2;
	std::cin >> num1;
	std::cin >> num2;
	std::cout << num1 << std::endl;
	std::cout << num2 << std::endl;
	if (num1 < num2) {
		std::cout << num1 << " es mas pequenio que " << num2 << std::endl;
	}
	else if (num1 > num2) {
		std::cout << num1 << " es mas grande que " << num2 << std::endl;
	}
	else {
		std::cout << num1 << " es mas igual que " << num2 << std::endl;
	}*/

	std::string a;
	std::string b;

	std::string texto = "Hola Mundo";
	std::cout << texto << std::endl;

	std::cout << texto.length() << std::endl;

	texto[0] = 'h';
	std::cout << texto << std::endl;

	texto += "!!!";
	std::cout << texto << std::endl;

	a = texto;
	b = texto;
	if (a == b)
	{
		std::cout << "Son iguales" << std::endl;
	}
	else
	{
		std::cout << "Son diferentes" << std::endl;
	}

	std::cout << texto.substr(0, 4) << std::endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
