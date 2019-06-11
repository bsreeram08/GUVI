#include<bits/stdc++.h>
using namespace std;
int main() {
	string data;
	cin>>data;
	int len=data.length();
	if(len%2==0)
	{
	    for(int i=(len/2)-1,j=(len/2);i>=0&&j<len;i--,j++)
	    {
	        if(data[i]!=data[j])
	        {
	            cout<<"NO";
	            return 0;
	        }
	    }
	    cout<<"YES";
	}
	else
	{
	    for(int i=(len/2)-1,j=(len/2)+1;i>=0&&j<len;i--,j++)
	    {
	        if(data[i]!=data[j])
	        {
	            cout<<"NO";
	            return 0;
	        }
	    }
	    cout<<"YES";
	}
	return 0;
}
