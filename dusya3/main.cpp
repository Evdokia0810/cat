#include <iostream>

using namespace std;

int main () {int n,j,i,k=0;
cin>>n;

for(i=1;i<=n;i++)
{

    for(j=1;j<=i;j++)
    {

        if(i%j==0) {k++;}

    }
    if(k==2){cout<<i<<" ";}
    k=0;
    }
    return 0;
}
