#include<iostream> 
using namespace std; 
void buildLowNumRec(string str, int n, string &res) 
{ 
	if (n == 0) 
	{ 
		res.append(str); 
		return; 
	}
	int len = str.length(); 
	if (len <= n) 
		return; 
	int minIndex = 0; 
	for (int i = 1; i<=n ; i++) 
		if (str[i] < str[minIndex]) 
			minIndex = i; 
	res.push_back(str[minIndex]); 
	string new_str = str.substr(minIndex+1, len-minIndex); 
	buildLowNumRec(new_str, n-minIndex, res); 
} 
string buildLowNum(string str, int n) 
{ 
	string res = ""; 
	buildLowNumRec(str, n, res); 
	return res; 
} 

int main() 
{ 
	string str;
	cin>>str;
	int n;
	cin>>n;
	string ans = buildLowNum(str, n); 
	if(ans=="")
	{
	    cout<<0;
	    return 0;
	}
	long long int res = stoi(ans);
	cout<<res;
	return 0; 
} 
