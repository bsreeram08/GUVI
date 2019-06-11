#include<iostream>
#include<math.h>
#include<malloc.h>
using namespace std;
void prime(unsigned long int l,unsigned long int r)
{
    int sizeofarr = (r/(sizeof(int)))+1;
    int *arr,ind,intsize=sizeof(int),sizeinindex,inindex,mask=1;
    sizeinindex=(intsize*8);
    arr=(int*) calloc(sizeofarr,sizeof(int));
    for(unsigned long int i=2;i<=r;i++)
    {
        ind=i/sizeinindex;
        inindex=i%sizeinindex;
        if(((arr[ind]>>inindex) & 1)==0)
        {
            for(unsigned long int j=2;i*j<=r;j++)
            {
                ind=(j*i)/sizeinindex;
                inindex=(j*i)%sizeinindex;
                if(((arr[ind]>>inindex) & mask )==0)
                {
                    arr[ind]=arr[ind] | (mask<<inindex);
                }
            }
        }
    }
    unsigned long int count=0;
    for(unsigned long int i=l;i<=r;i++)
    {
        if(i==1) i++;
        ind=i/sizeinindex;
        inindex=i%sizeinindex;
        if(((arr[ind]>>inindex) & 1)==0)
        {
            count++;
        }
    }
    cout<<count;
}
int main()
{
    unsigned long int l,r;
    cin>>l>>r;
    prime(l,r);
    return 0;
}
