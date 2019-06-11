#include <bits/stdc++.h>
using namespace std;

int main() {
	int m,n,temp;
	cin>>m>>n;
	map<int,int> arr;
	for(int i=0;i<m;i++)
	{
	    cin>>temp;
	    arr[temp]++;
	}
	bool flag=true;
	for(int i=0;i<n;i++)
	{
	    cin>>temp;
	    if(arr.find(temp)==arr.end())
	    {
	        flag=false;
	    }
	}
	if(flag)
	{
	    cout<<"YES";
	}
	else
	{
	    cout<<"NO";
	}
	return 0;
}
