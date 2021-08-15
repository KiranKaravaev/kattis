#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string str;
        cin>>str;
        int a,b,c,a1,b1,c1,k=0;
        scanf("%d/%d/%d",&a,&b,&c);
        scanf("%d/%d/%d",&a1,&b1,&c1);
        int q;
        cin>>q;
        if(a>=2010) k++;
        if(a1>=1991) k++;
        if(k==2 || k==1) cout<<str<<" eligible"<<endl;
        else if(q>=41) cout<<str<<" ineligible"<<endl;
        else cout<<str<<" coach petitions"<<endl;

    }
    return 0;
}