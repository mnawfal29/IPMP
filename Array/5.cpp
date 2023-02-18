#include <iostream>
using namespace std;

int main()
{
    int n, overall_xor = 0;
    cout << "Enter n: ";
    cin >> n;

    int x = 0, y = 0;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
        overall_xor ^= arr[i];
    
    int set_bit = overall_xor & ~(overall_xor - 1);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] & set_bit)
            x ^= arr[i];

        else
            y ^= arr[i];       
    }
    
    cout << "The numbers are " << x << " " << y <<endl;
}