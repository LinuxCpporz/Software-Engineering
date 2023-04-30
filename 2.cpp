#include <iostream>
using namespace std;

int n;
int a,b,i;
int ans=-2147483647;
int main()
{
    //cin>>n;
    int flag=0;
    //for(int i=1;i<=n;i++){
    while(cin>>a)
    {
        if(a>=0)
            flag=1;
        if(i==1)
            b=a;
        else
            b=max(a,b+a);
        ans=max(ans,b);
        if(cin.get()=='\n')
            break;
    }
    if(flag==0)
    {
        cout<<0<<endl;
        getchar();
        return 0;
    }
    cout<<ans<<endl;
    getchar();
    return 0;
}
