// fans out cards
// takes input from 1 to 13
// By Niraj Mahajan, IIT B CSE

#include <simplecpp>

void rect(void);

main_program
{
	int card;

	do
	{
		cout << "How many cards: ";
		cin >> card;
	}
	while(card > 13 || card < 0);

	turtleSim();

	right(160);

	repeat(card)
	{
		rect();
		right(10);
	}

	wait(10);
}

// function that draws a rectangle
void rect(void)
{
	repeat(2)
	{
		forward(100);
		right(90);
		forward(180);
		right(90);
	}
}