#include<bits/stdc++.h> 
using namespace std; 
int MinLength(string arr[], int n) 
{ 
	int min = INT_MAX; 

	for (int i=0; i<=n-1; i++) 
		if (arr[i].length() < min) 
			min = arr[i].length(); 
	return(min); 
} 
bool Prefix(string arr[], int n, string str, 
					int start, int end) 
{ 
	for (int i=0; i<=n-1; i++) 
		for (int j=start; j<=end; j++) 
			if (arr[i][j] != str[j]) 
				return (false); 
	return (true); 
} 
string commonPrefix(string arr[], int n) 
{ 
	int index = MinLength(arr, n); 
	string prefix;
	int low = 0, high = index; 

	while (low <= high) 
	{ 
		int mid = low + (high - low) / 2; 
		if (Prefix (arr, n, arr[0], low, mid)) 
		{ 
			prefix = prefix + arr[0].substr(low, mid-low+1); 

			low = mid + 1; 
		} 
		else
			high = mid - 1; 
	} 
	return (prefix); 
} 
int main() 
{ 
	
	int n;
	cin>>n;
	string arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	string ans = commonPrefix(arr, n); 
	cout<<ans;
	return (0); 
} 
