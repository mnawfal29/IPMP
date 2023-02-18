#include <iostream>
#include <map>
using namespace std;
void printDuplicate(string str)
{
	map<char, int> count;

	for (int i = 0; i < str.length(); i++) {
		count[str[i]]++;
	}

	for (auto it : count) {
		if (it.second > 1)
			cout << it.first << endl;
	}
}
int main()
{
	string inp;
    cout << "Enter string: ";
    cin >> inp;
	printDuplicate(inp);
	return 0;
}
