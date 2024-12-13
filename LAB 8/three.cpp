#include <iostream>
using namespace std;
int rev(int n[], int ind)
{
    if (ind == -1)
        return 0;
    cout << n[ind] << " ";
    return rev(n, ind - 1);
}
int main()
{
    int number[5] = {2, 4, 5, 6, 7};
    rev(number, 4);
    return 0;
}
