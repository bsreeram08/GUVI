#include <bits/stdc++.h>
using namespace std;

int main() {
	string data;
	cin>>data;
	if(!isalpha(data[0]))
	{
	    reverse(data.begin(),data.end());
	    cout<<data;   
	}
	return 0;
}
