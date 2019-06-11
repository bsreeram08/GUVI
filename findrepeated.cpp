#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,temp;
	cin>>n;
	map<int,int> array;
	while(n--)
	{
	    cin>>temp;
	    array[temp]++;
	}
	for(auto i=array.begin();i!=array.end();i++)
	{
	    if(i->second>1)
	    {
	        cout<<i->first<<" ";
	    }
	}
	return 0;
}
