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
	    if(array.find(temp)!=array.end())
	    {
	        cout<<temp;
	        return 0;
	    }
	    array[temp]=1;
	}
	cout<<"unique";
	return 0;
}
