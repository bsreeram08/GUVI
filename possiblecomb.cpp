#include <iostream>
#include <string>
using namespace std;
int cnt=0;
void recur(int digits[], int i, int n, string str)
{
	if (i == n)
	{
		cnt++;
		return;
	}
	static string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXVZ";
	int sum = 0;
	for (int j = i; j <= min(i + 1, n - 1); j++)
	{
		sum = (sum * 10) + digits[j];
		if (sum <= 26)
			recur(digits, j + 1, n, str + alphabet[sum - 1]);
	}
}
int finddigits(int n)
{
    int count=0;
    while(n--)
    {
        count++;
        n/=10;
    }
    return count;
}
int main()
{
    int number;
    cin>>number;
    int no_of_digits=finddigits(number);
	int digits[no_of_digits];
	for(int i=no_of_digits-1;i>=0;i--)
	{
	    digits[i]=number%10;
	    number/=10;
	}
	string str;
	recur(digits, 0, no_of_digits, str);
    cout<<cnt;
	return 0;
}
