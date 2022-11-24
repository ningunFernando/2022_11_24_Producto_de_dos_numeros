// 2022_11_24_Producto_de_dos_numeros.cpp
// Fernando Fabian Patino Ibarra
// Programa para ver el producto de dos numeros
//

#include <iostream>

int multi(int num1, int num2)
{
    if (num2 == 1) return num1;
    if (num2 > 0) {
        return num1 + multi(num1, num2 - 1);
    }
    else {
        return  -num1 + multi(num1, num2 + 1);
    }
    return 0;
}

int main()
{
    int num1, num2;
    std::cout << "ingrese el primer numero: " << std::endl;
    std::cin >> num1;
    std::cout << "ingrese el numero a multiplicar" << std::endl;
    std::cin >> num2;

    std::cout << num1 << " * " << num2 << " = "<<multi(num1, num2)<<std::endl;
}
