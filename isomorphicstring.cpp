#include <bits/stdc++.h>
using namespace std;

int main() {
	string data1,data2;
	cin>>data1>>data2;
	map<char,char> values;
	map<char,char> ::iterator temp;
	if(data1.length()==data2.length())
	{
	    if(data1.length()!=0)
	    {
	        values[data1[0]]=data2[0];
	        values[data2[0]]=data1[0];
	    }
    	for(int iter=1;iter<data1.length();iter++)
    	{
    	    temp=values.find(data1[iter]);
    	    if(temp==values.end())
    	    {
    	        values[data1[iter]]=data2[iter];
	            values[data2[iter]]=data1[iter];
    	    }
    	    else
    	    {
    	        //cout<<temp->first<<" "<<data1[iter]<<endl;
    	        //cout<<temp->second<<" "<<data2[iter];
    	        if(temp->second!=data2[iter])
    	        {
    	            cout<<"no";
    	            return 0;
    	        }
    	    }
    	}   
    	cout<<"yes";
	}
	else
	{
	    cout<<"no";
	}
	return 0;
}
