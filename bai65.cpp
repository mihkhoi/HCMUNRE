#include<iostream>
#include<math.h>
using namespace std;

bool ktsnt(int n)
{
       if(n < 2) return 0;
       for(int i = 2;i <= sqrt(n);i++)
       {
              if(n%i == 0)
              {
                     return 0;
              }
       }
       return 1;
}

int t(int n)
{
       int s = 0;
       for(int i = 2;i < n;i++)
       {
              if(ktsnt(i) == 1)
              {
                     s = s + i;
              }
       }
       return s;
}

int main()
{
       int n;
       cin >> n;
       cout << t(n);
       return 0;
}