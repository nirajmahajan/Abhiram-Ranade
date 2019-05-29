// calculates e^x
// By Niraj Mahajan, IITB CSE

#include <simplecpp>

main_program{

	double x;
	int n;

	cout << "Which terms exp is to be found:  ";
	cin >> x;

	cout << "How many iterations:  ";
	cin >> n;

	double ans = 0, term = 1;

	// LI: term = x^i/i! 				ans = 1 + x/1! + x^2/2! + ... + x^(i-1)/(i-1)!

	for(int i = 0; i < n; i++)		// term = x^(i-1)/(i-1)!		ans = 1 + x^1/1! + x^2/2! + ... + x^(i-2)/(i-2)
	{								// replace all i by (i-1)

		ans += term;				// ans = 1 + x/1! + x^2/2! + ... + x^(i-1)/(i-1)!

		term = (term * x)/(i+1);	// term = x^i/i!
	}

	printf("e raised to %f is %f\n", x, ans);
}