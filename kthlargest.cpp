#include<bits/stdc++.h>
using namespace std;
int main() {
	int temp,n,p;
	cin>>n;
	cin>>p;
	map <int,int> arr;
	while(n--)
	{
	   cin>>temp;
	   arr[temp]++;
	}
	int pos=0;
	for(auto iter=arr.rbegin();iter!=arr.rend();iter++)
	{
        pos++;
        if(pos==p)
        {
            cout<<iter->first;
            return 0;
        }
	}
	return 0;
}
