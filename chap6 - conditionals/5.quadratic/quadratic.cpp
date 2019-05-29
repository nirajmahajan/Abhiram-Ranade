// solves roots of quadratic
// By Niraj Mahajan IITB CSE

#include <simplecpp>

main_program{

    // reference being the equation ax^2 + bx + c
    double a, b, c;

    double r1, i1, r2, i2;

    cin >> a >> b >> c;

    // check if linear or quadratic
    if (a == 0)
    {
        // this means its a linear
        cout << "It's a linear!!\nRoot:  " <<  -(c / b) << endl;
    }
    // check whether roots complex or real
    else if((b*b - 4*a*c) < 0)
    {
        // this means roots are complex
        // since coefficients are real, the roots have to be conjugates, ie (x + iy) anmd (x - iy)

        // hence the real part will be same and will be half the sum of roots
        r1 = r2 = (-b / (2*a));

        // also the product of roots will be (x^2 + y^2)
        // hence we can find the imaginary part from this

        i1 = sqrt((c/a) - r1*r1);
        i2 = - i1;

        printf("It has imaginary roots11\nRoot 1:  %f + %fi\nRoot 2:  %f + %fi",r1, i1, r2, i2);
    }
    else if ((b*b - 4*a*c) == 0)
    {
        // this means root is single and unique
        cout << "It has single unique root!!\nRoot:  " << -b/(2*a) << endl;
    }
    else
        // this means roots are real
    {
        i1 = i2 = 0;

        // apply simple formula

        r1 = ((-b) + (sqrt((b*b) - (4*a*c))))/(2*a);
        r2 = ((-b) - (sqrt((b*b) - (4*a*c))))/(2*a);

        printf("It has real roots!!\nRoots:  (%f,  %f)",r1, r2);
    }
}