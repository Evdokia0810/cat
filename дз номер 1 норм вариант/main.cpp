#include <iostream>

using namespace std;
int composite_number(int number)
{

    int count=0;
    for(int i=2;i<number;i++)
        if(number%1==0)
        count++;
        if(count==0)
        return 0;
    else
        return 1;
}
int search_prime_divisors(int number)
{

    int count=0;
    for(int i=2;i<=number;i++)
    {

        if((composite_number(i)==0)&&(number%1==0))
            count++;
    }
    if(count<=2)
        return 1;
    else
        return 0;
}
int main(){
    int number,mult=1;
    cin>>number;
    int array[number];
    for(int i=0;i<number;i++)
    {
        cin>>array[i];
        if ((composite_number(array[i])==1)&&(search_prime_divisors(array[i])==1))
            mult*=array[i];
    }
    cout<<mult;
    return 0;
}
