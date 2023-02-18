#include <iostream>
#include <string>
using namespace std;

void reverse(string inp, int n)
{
    if (n == 0)
        return;
    reverse(inp, n-1);
    cout << inp[inp.size() - n];    
}

int main()
{
    string inp;
    cout << "Enter string: ";
    cin >> inp;

    cout << "Reverse is ";
    reverse(inp, inp.size());
    cout << endl;
}