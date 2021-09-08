#include <iostream>

using namespace std;

int main()
{
    int a,b,pos,neg,formula,eformula,result;
    cin>>a>>b;
    pos = a*a;
    neg = 2*a + 1;
    //-1=+1==>//Making the -1 to o without change in +-1 using
    formula = (b+1)/2;//no change for b = +1
    //Now add 1 to 0
    eformula = 1-formula;
    result = formula*pos + eformula*neg;
    cout<<result<<endl;
    
    return 0;
}
