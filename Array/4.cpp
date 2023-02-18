#include <iostream>
using namespace std;

int main()
{
    int n, overall_xor = 0;
    cout << "Enter n: ";
    cin >> n;

    int x = 0, y = 0;

    int arr[2*n + 2];

    for (int i = 0; i < 2*n + 2; i++)
        cin >> arr[i];

    for (int i = 0; i < 2*n + 2; i++)
        overall_xor ^= arr[i];
    
    int set_bit = overall_xor & ~(overall_xor - 1);

    for (int i = 0; i < 2*n + 2; i++)
    {
        if (arr[i] & set_bit)
            x ^= arr[i];

        else
            y ^= arr[i];       
    }
    
    cout << "The numbers are " << x << " " << y <<endl;
}