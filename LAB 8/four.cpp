#include <iostream>
using namespace std;

int factorial(int n)
{
    cout << "Calling factorial(" << n << ")" << endl;

    if (n == 0 || n == 1)
    {
        cout << "Returning 1 from factorial(" << n << ")" << endl;
        return 1;
    }

    int result = n * factorial(n - 1);
    cout << "Returning " << result  << endl;

    return result; 
}

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;

    if (number < 0)
    {
        cout << "Factorial of negative numbers is undefined." << endl;
        return 1;
    }

    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}
