#include <iostream>
using namespace std;

int main() {
	string data,newdata;
	cin>>data;
	for(int i=0;i<data.length();i+=2)
	{
	    if(i+1<data.length())
	        newdata.push_back(data[i+1]);
	    newdata.push_back(data[i]);
	}
	cout<<newdata;
	return 0;
}
