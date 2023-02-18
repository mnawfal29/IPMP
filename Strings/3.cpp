#include <iostream>
using namespace std;

char findFirst(string &str)
{
    int n = str.size();

    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            if (str[i] == str[j] && i != j)
            {
                flag = 1;
                break;
            }
            
        }
        if (flag == 0)
            return str[i];
    }
    return 0;
    
}

int main()
{
    string inp;
    cout << "Enter string: ";
    cin >> inp;

    cout << findFirst(inp) << endl;
    return 0;
}