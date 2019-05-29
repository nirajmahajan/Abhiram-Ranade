// checks if a char is a vowel or a consonent

#include <cstdio>
#include <iostream>
#include <cctype>


int main(void)
{
	char c;

	std::cout << "Character:  ";
	std::cin >> c;

	c = tolower(c);

	int ascii = c;

	if (ascii == 'a' || ascii == 'e' || ascii == 'i' || ascii == 'o' || ascii == 'u')
	{
		std::cout << "Vowel\n";
	}
	else
	{
		std::cout << "Consonant\n";
	}
}