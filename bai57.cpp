#include<iostream>
#include<math.h>
using namespace std;
int main()
{
       int n, ngt = 1;
       cin >> n;
       if(n == 1)
       {
              cout << "K";
       }
       else
       {
              for(int i = 2;i <= sqrt(n);i++)
              {
                     ngt = 1;
                     if(n%i == 0)
                     {
                            ngt = 0;
                     }
              }
              if(ngt == 1)
              {
                     cout << n << " la so nguyen to";
              }
              else
              {
                     cout << n << " khong phai la so nguyen to";
              }
       }
       return 0;
}