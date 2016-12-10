#include <iostream>
#include <string>
using namespace std;
bool prime(int a){
           bool logic=true;
           for(int i=2;i<a;i++)
           if(a%i==0){logic=false;break;}
           return logic;
}
bool good(int a){
int q=0,p=0;
while(p<=a){
    if(prime(p)){
        if(a%p==0)q++;
    }
    p++;
}
if(q>=2)return true;
else return false;
    }
    int main()
{

    bool be=false;
    int n,x,ans=1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(good(x)){ans*=x;be=true;}
    }
    if(!be)cout<<1;
    else cout<<ans;
    return 0;
}
