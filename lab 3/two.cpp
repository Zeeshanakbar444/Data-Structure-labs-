#include <iostream>
using namespace std;
int main()
{
    int *arr = new int[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 1;
    }

    int *arr2 = new int[((sizeof(arr) / 4) - 1) * 2];

    for (int i = 0; i < 10; i++)
    {
        arr2[i] = arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr2[i] << " ";
    }
}