#include <iostream>
using namespace std;
int fab(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fab(n - 1) + fab(n - 2);
}
int main()
{
    int number;
    cout << "enter number";
    cin >> number;
    cout << fab(number);
}
