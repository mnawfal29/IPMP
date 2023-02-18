#include <iostream>
using namespace std;

void findPair(int arr[], int n, int x)
{
    int i;
    int rem[x] = {0};

    for (i = 0; i < n; i++)
        if (arr[i] < x)
            rem[arr[i] % x]++;

    for (i = 1; i < x / 2; i++)
    {
        if (rem[i] > 0 && rem[x - i] > 0)
        {
            cout << "Yes" << endl;
            break;
        }
    }

    if (i >= x / 2)
    {
        if (x % 2 == 0)
        {
            if (rem[x / 2] > 1)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else
        {
            if (rem[x / 2] > 0 && rem[x - x / 2] > 0)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
}

int main()
{
    int n, x;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter element to find: ";
    cin >> x;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    findPair(arr, n, x);

    return 0;
}