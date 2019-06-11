#include<bits/stdc++.h>
using namespace std;
int value(char val)
{
     if (val == 'I') 
        return 1; 
    if (val == 'V') 
        return 5; 
    if (val == 'X') 
        return 10; 
    if (val == 'L') 
        return 50; 
    if (val == 'C') 
        return 100; 
    if (val == 'D') 
        return 500; 
    if (val == 'M') 
        return 1000; 
    return -1;
}
int main() {
	string data;
	cin>>data;
	int result=0,ans1,ans2;
	if(data.length()<=2)
	{
    	for(int iter=0;iter<data.length();iter++)
    	{
    	    ans1=value(data[iter]);
    	    if(iter+1<data.length())
    	    {
    	        ans2=value(data[iter+1]);
    	        if(ans1>=ans2)
    	        {
    	            result=result+ans1+ans2;
    	        }
    	        else
    	        {
    	            result=result+ans2-ans1;
    	        }
    	        iter++;
    	    }
    	    else
    	    {
    	        result=result+ans1;
    	    }
    	}
    	cout<<result;
	}
	return 0;
}
