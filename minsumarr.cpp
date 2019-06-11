#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	int x,y,max=INT_MAX;
	for(int i=0;i<n;i++)
	{
	    for(int j=i+1;j<n;j++)
	    {
	        if(max>abs(arr[i]+arr[j]))
	        {
	            max=abs(arr[i]+arr[j]);
	            x=arr[i];
	            y=arr[j];
	        }
	    }
	}
	cout<<x<<" "<<y;
	return 0;
}
