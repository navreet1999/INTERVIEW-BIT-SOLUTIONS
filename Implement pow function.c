#include<iostream>
using namespace std;


int main()
{
    int x=3,n=8,d=5;
   int r;
    if(x==0)
    return 0;
    if(n==0)
    return 1;

    long long int base =x ,ans=1;
     while (n > 0)
    {
        if (n % 2 == 1)
        {
            ans = (ans * base) % d;
            cout<<endl<<"ans"<<ans<<endl;
            n--;
        }
        else
        {
            base = (base * base) % d;
            cout<<"bsas"<<base<<endl;
            n /= 2;
        }
    }
   if (ans < 0)
        ans = (ans + d) % d;
  cout<<"resultt " <<ans ;
}
