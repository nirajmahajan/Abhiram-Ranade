#include <iostream>
#include <cmath>

int main(void)
{
	int num1, num2, num3;

	// take input
	std::cin >> num1 >> num2 >> num3;

	int largest = std::max(num1, (std::max(num2, num3)));
	int smallest = - std::max(-num1, (std::max(-num2, -num3)));

	int middle = (num1 + num2 + num3) - (largest + smallest);

	printf("Numbers in ascending order are:\n%i, %i, %i\n", smallest, middle, largest);
}