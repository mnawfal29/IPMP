#include <iostream>
using namespace std;

void findUnion(int arr1[], int arr2[], int n1, int n2)
{
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";

        else if (arr1[i] > arr2[j])
            cout << arr2[j++] << " ";

        else
        {
            cout << arr1[i++] << " ";
            j++;
        }
    }

    while (i < n1)
        cout << arr1[i++] << " ";

    while (j < n2)
        cout << arr2[j++] << " ";
    cout << endl;
}

void findIntersection(int arr1[], int arr2[], int n1, int n2)
{
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr1[i] > arr2[j])
            j++;
        else
        {
            cout << arr1[i++] << " ";
            j++;
        }
    }
    cout << endl;
}

int main()
{
    int n1, n2;
    cout << "Enter number of elements in arr1: ";
    cin >> n1;
    cout << "Enter number of elements in arr2: ";
    cin >> n2;
    cout << endl;

    int arr1[n1], arr2[n2];

    cout << "Enter arr1 elements" << endl;
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];

    cout << "Enter arr1 elements" << endl;
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    cout << endl;
    cout << "Union is:" << endl;
    findUnion(arr1, arr2, n1, n2);

    cout << "Intersection is:" << endl;
    findIntersection(arr1, arr2, n1, n2);
    
}