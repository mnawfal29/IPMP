#include <iostream>
#include <vector>
using namespace std;

vector<int> index;
string final;

void swap(char *a, char *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(string &inp, int n)
{
    int i = 0, j = n-1;
    while (i < j)
    {
        if(inp[i] == ' ')
            index.push_back(i);
        swap(&inp[i++], &inp[j--]);
        if(inp[i-1] == ' ')
            index.push_back(i-1)
    }   
}

int main()
{
    string inp;
    cout << "Enter string: ";
    cin >> inp;

    cout << reverse(inp, inp.size(), true) << endl;
    return 0;
}