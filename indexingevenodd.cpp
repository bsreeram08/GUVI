#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,temp,tn=0;
	cin>>n;
	while(n--)
	{
	    cin>>temp;
	    if(tn%2==0 && temp%2!=0)
	    {
	        cout<<temp<<" ";
	    }
	    else if(tn%2!=0 && temp%2==0)
	    {
	        cout<<temp<<" ";
	    }
	    tn++;
	}
	return 0;
}
