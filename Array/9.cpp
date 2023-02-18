#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            int c = i * i + j * j;
            int sqroot = sqrt(c);
            if (sqroot * sqroot == c && c <= n)
                cout << i << " " << j << " " << c << endl;
        }
        
    }
    
}