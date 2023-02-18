#include <iostream>
using namespace std;

int main()
{
    int n, xor_op = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
        xor_op ^= arr[i];
    
    cout << "Element is " << xor_op << endl;      
}