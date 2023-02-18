#include <iostream>
using namespace std;

void swap(char *a, char *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void permute(string &str, int l, int r)
{
    if (l == r)
        cout << str << endl;
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(&str[l], &str[i]);
            permute(str, l + 1, r);
            swap(&str[l], &str[i]);
        }
    }
}

int main()
{
    string inp;
    cout << "Enter string: ";
    cin >> inp;

    permute(inp, 0, inp.size() - 1);
    return 0;
}