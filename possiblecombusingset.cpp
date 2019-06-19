#include<iostream>
#include<set>
using namespace std;
char alphabets[]="*ABCDEFGHIJKLMNOPQRSTUVWXYZ";
set <string> ansset;
void finddecodings(int data,string strdata)
{
    if(data==0)
    {
        string ans;
        for(auto iter = strdata.rbegin();iter!=strdata.rend();iter++)
            ans.push_back(*iter);
        ansset.insert(ans);
        return;
    }
    if(data%10 != 0)
    {
        finddecodings(data/10,strdata+alphabets[data%10]);
    }
    if(data %100 <27)
    {
        finddecodings(data/100,strdata+alphabets[data%100]);
    }
}
int main()
{
    int n;
    cin>>n;
    string str;
    finddecodings(n,str);
    cout<<"The Strings are:-\n";
    for(auto iter = ansset.begin(); iter!=ansset.end();iter++)
    {
        cout<<*iter<<endl;
    }
    cout<<"The Count is: "<<ansset.size();
}
