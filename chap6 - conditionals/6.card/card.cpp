// inputs a number and outputs the card number
// sequence : club, diamond, heart, spade
// By Niraj Mahajan IITB CSE

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>

int main(void)
{
	int num;

	// error checking
	do
	{
		std::cout << "Card number:  ";
		std::cin >> num;
	}
	while (num > 52 || num <= 0);

	// find the suite using integer division!!
	int suite = (num - 1) / 13;

	// the magnitude of the card
	int magnitude = num - (13 * suite);

	// define a string!
	char mag[6];

	// take cases for the card to be jac or queen or king or ace or ten
	// we take case for ten, because we are gonna convert single digit integers to ascii directly
	if(magnitude == 11)
	{
		char mag[] = "Jack";
	}
	else if ( magnitude == 12)
	{
		char mag[] = "Queen";
	}
	else if (magnitude == 13)
	{
		char mag[] = "King";
	}
	else if (magnitude == 1)
	{
		char mag[] = "Ace";
	}
	else if (magnitude == 10)
	{
		char mag[] = "10";
	}
	else
	{
		mag[0] = {(char)('0' + magnitude)};
		mag[1] = {'\0'};
	}

	if (suite == 0)
	{
		printf("%s of Spades\n", mag);
	}
	else if (suite == 1)
	{
		printf("%s of Hearts\n", mag);
	}
	else if (suite == 2)
	{
		printf("%s of Diamonds\n", mag);
	}
	else if (suite == 3)
	{
		printf("%s of Clubs\n", mag);
	}
	else
	{
		printf("Error!!\n");
		return 1;
	}

}