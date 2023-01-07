#include<iostream>
using namespace std;
int main()
{
       int a, b, step;
       cin >> a >> b;
       if(a > b)
       {
              step = a;
       }
       else
       {
              step = b;
       }
       for(int i = step;i <= a*b;i += step)
       {
              if(i%a == 0 && i%b == 0)
              {
                     cout << i;
                     break;
              }
       }
       return 0;
}