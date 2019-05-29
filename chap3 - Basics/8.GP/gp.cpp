// write an gp
// By Niraj Mahajan IITB CSE

#include <simplecpp>

main_program
{
	int first_term;
	int comm_ratio;
	int terms;
	int i = 0;

	cout << "What is first term:  ";
	cin >> first_term;

	cout << "What is common ratio:  ";
	cin >> comm_ratio;

	cout << "How many terms to be printed:  ";
	cin >> terms;
	


	cout << "The GP is as follows: \n";
	repeat(terms)
	{
		cout << first_term * pow(comm_ratio, i) << endl;
		i++;
	}
}