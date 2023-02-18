#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
	int temp, dig, rev = 0;
	temp = num;
	while (num != 0) {
		dig = num % 10;
		rev = (rev * 10) + dig;
		num = num / 10;
	}
	if (temp == rev)
        return true;
	else 
		return false;
}
int main()
{
	int num = 3541;
	while (!isPalindrome(num))
		num = num + 1;
    
	cout << "Next Palindrome :";
	cout << num << endl;
	return 0;
}