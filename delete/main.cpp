#include <iostream>
using namespace std;
void delete_duplicates(int* array,int n)
{

    bool flag[n];
    for(int i=0;i<n;i++)
        flag[i]=true;
    for(int i=0;i<n; i++)
        for (int k=0;k<n;k++)
        if (array[i]==array[k] and i!k)
        flag[i]=false;
    for (int i=0;i<n;i++0)
    if ( flag[i])
        cout<<array[i]<<" ";
}
int main ()
{

    int n;
    cin>>n;
    int* array=new int [n];
    for (int i=0; i<n;i++)
        cin>>array[i];
    delete_duplicates (array,n);
    delete [] array;
    return 0;
}
