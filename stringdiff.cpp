#include <iostream>
using namespace std;

int main() {
	string data1,data2;
	cin>>data1>>data2;
	int diff=0;
	if(data1.length()==data2.length())
	{
	    for(int i=0;i<data2.length();i++)
	    {
	        data1[i]=tolower(data1[i]);
	        data2[i]=tolower(data2[i]);
	        if(data1[i]!=data2[i])
	        {
	            diff++;
	        }
	    }
	    if(diff<=1)
	    {
	        cout<<"yes";
	    }
	    else
	    {
	        cout<<"no";
	    }
	}
	else
	{
	    cout<<"no";
	}
	return 0;
}
