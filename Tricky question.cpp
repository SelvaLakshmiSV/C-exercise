#include <iostream>

using namespace std;

int main()
{   int w,cnt=0;
    cin>>w;
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    cnt += (a<=w);
    cnt += (b<=w);
    cnt += (c<=w);
    cnt += (d<=w);
    cnt += (e<=w);
    cout<<cnt<<5 - cnt;
    return 0;
}
