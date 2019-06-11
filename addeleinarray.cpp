#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,temp;
	cin>>n;
	map<int,int> arr;
	for(int i=0;i<n;i++)
	{
	    cin>>temp;
	    arr[temp]=1;
	}
	for(auto iter = arr.begin();iter!=arr.end();iter++)
	{
	    for(auto iter2=arr.begin();iter2!=arr.end();iter2++)
	    {
	        if(iter2->first>iter->first)
    	        if(arr.find(iter->first+iter2->first)!=arr.end())
    	        {
    	            cout<<iter->first<<" "<<iter2->first<<" "<<arr.find(iter->first+iter2->first)->first<<endl;
    	        }
	    }
	}
	return 0;
}
