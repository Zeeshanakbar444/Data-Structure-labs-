#include <iostream>
using namespace std;
int main()
{
    int arr[6];
    for (int i = 0; i < (sizeof(arr) / 4); i++)
    {
        cout << "enter for" << 1 + i << "value";
        cin >> arr[i];
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}