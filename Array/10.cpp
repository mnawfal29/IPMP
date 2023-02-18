#include <bits/stdc++.h>
using namespace std;

void findTriplet(int arr[], int n, int sum)
{
    int l, r;
    sort(arr, arr + n);
    for (int i = 0; i < n - 2; i++)
    {
        l = i + 1;
        r = n - 1;
        while (l < r)
        {
            if (arr[i] + arr[l] + arr[r] == sum)
            {
                printf("Triplet is %d, %d, %d", arr[i], arr[l], arr[r]);
                return;
            }
            else if (arr[i] + arr[l] + arr[r] < sum)
                l++;
            else
                r--;
        }
    }
    return;
}

int main()
{
    int n, sum;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter sum: ";
    cin >> sum;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    findTriplet(arr, n, sum);
    return 0;
}
