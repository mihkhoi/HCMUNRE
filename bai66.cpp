#include<iostream>
#include<math.h>
using namespace std;

bool ktscp(int n)
{
       int x = sqrt(n);
       return x*x == n;
}

void dcp(int n)
{
       int d = 0;
       for(int i = 2;i < n;i++)
       {
              if(ktscp(i) == 1)
              {
                     d++;
              }
       }
       cout << d;
}
int main()
{
       int n;
       cin >> n;
       dcp(n);
       return 0;
}