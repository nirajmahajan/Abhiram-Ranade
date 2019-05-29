// write an app
// By Niraj Mahajan IITB CSE

#include <simplecpp>

main_program
{
	int first_term;
	int comm_diff;
	int terms;
	int i = 0;

	cout << "What is first term:  ";
	cin >> first_term;

	cout << "What is common difference:  ";
	cin >> comm_diff;

	cout << "How many terms to be printed:  ";
	cin >> terms;


	cout << "The AP is as follows: \n";
	repeat(terms)
	{
		cout << first_term + (i * comm_diff) << endl;
		i++;
	}
}