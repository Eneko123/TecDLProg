#include <iostream>
#include <string>

void invertirPalabra(std::string palabra)
{
    std::string palabraInvertida;

    for (int i = palabra.length() - 1; i >= 0; i--) {
        palabraInvertida += palabra[i];
    }
    std::cout << palabraInvertida << std::endl;
}

void NumeroPrimo(int num)
{
    bool esPrimo = true;
    if (num <= 1) {
        esPrimo = false;
    }
    else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                esPrimo = false;
                break;
            }
        }
    }
    if (esPrimo) {
        std::cout << num << " es un numero primo." << std::endl;
    }
    else {
        std::cout << num << " no es un numero primo." << std::endl;
    }
}

void Capicua(int num)
{
    int numOriginal = num;
    int numInvertido = 0;
    while (num > 0) {
        int digito = num % 10;
        numInvertido = numInvertido * 10 + digito;
        num /= 10;
    }
    if (numOriginal == numInvertido) {
        std::cout << numOriginal << " es un numero capicua." << std::endl;
    }
    else {
        std::cout << numOriginal << " no es un numero capicua." << std::endl;
    }
}

int main()
{
    std::string palabra = "Hola";

    int num = 10;

    int num2 = 22;

    invertirPalabra(palabra);

    NumeroPrimo(num);

    Capicua(num2);
}