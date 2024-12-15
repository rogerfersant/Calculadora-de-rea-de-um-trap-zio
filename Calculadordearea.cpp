#include <iostream>

//Função para realizar a formula
float area(float B, float b, float h)
{
	

	return ((B + b) / 2) * h;
}

// Função para vê a formula
float formula(float B, float b, float h)
{
	float a;
	std::cout << "\t\t\tFormula \n";
	std::cout << "     B + B \n";
	std::cout << "A= ---------" << h << "\n";
	std::cout << "       2 \n";

	std::cout << "\n      " << B << " + " << b << "\n";
	std::cout << "A = ---------" << h << "\n";
	std::cout << "        2 \n";


	std::cout << "\n      " << B + b << "\n";
	std::cout << "A = -------" << h << "\n";
	std::cout << "      2 \n";

	std::cout << "\n " << ((B + b) / 2) << " x " << h << "\n";
	a = ((B + b) / 2) * h;

	std::cout << "\n  " << a << std::endl;
	
	return a;	
}