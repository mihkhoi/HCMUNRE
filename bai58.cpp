#include<iostream>
using namespace std;
int main()
{
       int n;
       int d = 0;
       cin >> n;
       for(int i = 1;i <= n ;i++)
       {
              if(i%2 == 0)
              {
                     d++;
              }
       }
       cout << d;
       return 0;
}