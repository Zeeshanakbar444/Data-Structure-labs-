#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};

    for (int i = (sizeof(arr) / 4) - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}
