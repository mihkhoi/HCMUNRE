#include<iostream>
using namespace std;
int main()
{
       int n, i = 0, s = 0;
       cin >> n;
       if(n >= 0)
       {
              while(i <= n)
              {
                     s = s + i;
                     i += 1;
              }
       }
       cout << s;
       return 0;
}