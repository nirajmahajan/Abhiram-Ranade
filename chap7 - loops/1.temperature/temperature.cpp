#include <cstdio>
#include <iostream>

int main(void)
{

	int num;
	std::cout << "How many readings till tempeartures 0 to 100:  ";
	std::cin >> num;

	double gap = 100 / (num);

	for (int i = 0; i < num + 1; i++)
	{
		double celc = (i * gap);
		double fah = (32 + ((9*celc)/5));

		std::cout << i << ".	" << celc << "            " << fah << std::endl;
	}
}