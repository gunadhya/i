#include <iostream>
using namespace std;

int main()
{
    //cout << "Hello World!" << endl;
    
    int a[10],b[10],n,k,i,t,j ,x;
    cin>>n;
    cout<<" ";
    cin>>k;
    cout<<endl;
    for(i=0;i<n;i++)
    {
    	cin>>a[i];
    	cout<<" ";
    }
    if(n>1 && k>1){
    for(i=0;i<n;i++)
    {
    	b[i]=a[i];
    	a[i]=a[i]%k;
    }
    for(i=1;i<n;++i)
    {
        for(j=0;j<(n-i);++j)
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            
            	x=b[j];
            	b[j]=b[j+1];
            	b[j+1]=x;
            }
    }
    
    for(i=0;i<n;i++)
    {
    	cout<<b[i]<<" ";
    }
    }
    return 0;
}