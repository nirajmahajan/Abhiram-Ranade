#include <simplecpp>
#include <cctype>
#include <cstring>

int magnitude(std::string command);

main_program
{
	initCanvas("turtle!!", 500, 500);

	// define a turtle
	Turtle t1;

	// define a std::string which is the command input
	std::string command;
	// an int which is the magnitude of the value assigned to command
	int value;

	// ensure proper usage!
	cout << "Enter 'q' to end the program!!\n";
 
 	// start an infinite loop till termination
	do
	{
		// take the command
		cin >> command;

		// calculate the magnitude
		value = magnitude(command);

		// RIGHT
		if(command[0] == 'r')
		{
			t1.right(value);
		}

		// LEFT
		if(command[0] == 'l')
		{
			t1.left(value);
		}

		// FORWARD
		if(command[0] == 'f')
		{
			t1.forward(value);
		}
	}
	while(command[0] != 'q');
}


// takes in a std::string and outputs the numerical part
int magnitude(std::string command)
{

	command[0] = '0';

	int ans =  std::stoi(command);

	return ans;
}