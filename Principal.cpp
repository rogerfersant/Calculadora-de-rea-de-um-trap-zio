//Rog�rio Ferreira dos Santos
//@codebyroger
//Calculadora de �rea de um trap�zio
#include <iostream>
#include <locale.h>
#include <string>
#include "Calculadordearea.h"

int main()
{
	setlocale(LC_ALL, "portuguese");

	float B, b, h, a;
	std::string resposta;

	std::cout << "Informe o valor da base maior: ";
	std::cin >> B;

	std::cout << "Informe o valor da base menor: ";
	std::cin >> b;

	std::cout << "Informe o valor da �rea: ";
	std::cin >> h;

	a = area(B, b, h);

	std::cout << a << std::endl;

	std::cout << "Deseja v� a formula?  ";
	std::cin >> resposta;
	system("cls");

	if (resposta == "Sim" || resposta == "sim" || resposta == "S" || resposta == "s")
	{
		formula(B, b, h);

	}

	system("PAUSE");
	return 0;
}