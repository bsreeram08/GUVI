#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,temp,tn;
	cin>>n;
	tn=n;
	map<int,int> array;
	while(n--)
	{
	    cin>>temp;
	    array[temp]++;
	}
	for(auto i=array.rbegin();i!=array.rend();i++)
	{
	    for(int j=0;j<i->second;j++)
	        cout<<i->first;
	}
	return 0;
}
