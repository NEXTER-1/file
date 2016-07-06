#include <iostream>
using namespace std;

int main() {
long long int n,h,k,pot,ans=0,left=0;
cin>>h>>k;
for(int i=0;i<n;i++)
{
    cin>>pot;
    if(pot<=h)
    {
        left=left+pot;
    }
    else
    {
        ans++;left=pot;
    }
    ans=ans+left/k;
    left=left%k;
}
ans=ans+left/k;
left=left%k;
if(left>0)
ans++;
cout<<ans;
	return 0;
}
