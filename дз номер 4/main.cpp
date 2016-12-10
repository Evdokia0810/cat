#include <iostream>

using namespace std;

int main()
{

    int c,b;
    cin>>c>>b;
    int a[c];
    for(int i=0;i>a[i];) {
        for (int i=0;i< c-1;i++ ){
            bool t=false;
            for(int j=0;j<c-i-1;j++){
                if(a[j]>a[j+1]) {
                    int m=a[j+1];
                    a[j+1]=m;
                    t=true;
                    if(!t)
                        break;
                }
                cout<<a[b-1];
            }

            }
        }
    }


