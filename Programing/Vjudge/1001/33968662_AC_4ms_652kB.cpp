#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a;
    for(int i=0; i<a;i++)
    {
        cin>>b;
        d=b/2;
        c=b-d;
        cout<<c<<" "<<d<<endl;
    }
}