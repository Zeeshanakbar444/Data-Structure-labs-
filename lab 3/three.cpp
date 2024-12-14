#include <iostream>
using namespace std;
int sum(int arr[10])
{
    int res = 0;
    for (int i = 0; i <10; i++)
    {
        res += arr[i];
    }

    return res;
}
int main()
{
    int *arr = new int[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 1;
    }
    cout << "result" << sum(arr);
}