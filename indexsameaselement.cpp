#include <iostream>
using namespace std;

int main() {
	int temp,n,index=0;
	bool flag=false;
	cin>>n;
	while(n--)
	{
	    cin>>temp;
	    if(temp==index)
	    {
	        flag=true;
	        cout<<index<<" ";
	    }
	    index++;
	}
	if(flag==false)
	{
	    cout<<"-1";
	}
	return 0;
}
