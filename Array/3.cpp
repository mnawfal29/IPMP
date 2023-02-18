#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int total_sum = n * (n+1) / 2;

    int arr[n - 1];

    for (int i = 0; i < n - 1; i++)
        cin >> arr[i];

    for (int i = 0; i < n - 1; i++)
        total_sum -= arr[i];
    
    cout << "Element is " << total_sum << endl;      
}