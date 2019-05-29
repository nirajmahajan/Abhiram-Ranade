// Evaluates natural logarithms
// By Niraj Mahajan, IITB CSE

#include <simplecpp>

main_program{

	double x;
	int n;

	cout << "Which number's ln is to be calculated:  ";
	cin >> x;

	cout << "How many iterations:  ";
	cin >> n;

	x = x - 1; 									// since series expansion shows ln(1+x)

	double term = x;
	double ans = 0;

	// LI: ans = x - x^2/2 + x^3/3 ... +- x^(i)/(i)
	//	   term = (-x)^(i+1)/(i+1)

	for(int i = 0; i < n; i++)	// i++  => ans = x - x^2/2 ... -+ x^(i-1)/(i-1)      &&    term = (-x)^(i)/i
	{										
		ans += term;	// ans = x - x^2/2 + x^3/3 ... +- x^(i)/(i)

		term = (term * (-x) * (i+1))/(i+2); 			// term = (-x)^(i+1)/(i+1)
	}

	cout << "ln(" << x << ") is:  " << ans << " upto accuracy of " << n << " iterations"<< endl;
	cout << "Actual value is " << log(x+1) << endl;
}