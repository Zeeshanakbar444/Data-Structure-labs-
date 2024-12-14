#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {4,5,6,7,8 ,3};
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < 6; i++)
    {

        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout <<"maximam " <<  max << endl;
    cout << "minimum " <<  min << endl;
}
