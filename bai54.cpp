#include<iostream>
#include<math.h>
using namespace std;
int main()
{
       int m, n, s = 0;
       cin >> m >> n;
       for(int i = 1;i <= n;i++)
       {
              s = s + pow((-1),i)*(m*i);
       }
       cout << s;
       return 0;
}