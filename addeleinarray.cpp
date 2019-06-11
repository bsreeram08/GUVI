#include <bits/stdc++.h>
using namespace std;
int n,temp;
int find(int val,int *arr)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==val)
        {
            return val;
        }
    }
    return -1;
}
int main() {
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
	    for(int j=i+1;j<n;j++)
	    {
	        int x=find(arr[i]+arr[j],arr);
	        if(x!=-1)
	        {
	            cout<<arr[i]<<" "<<arr[j]<<" "<<x<<endl;
	        }
	    }
	}
	return 0;
}
