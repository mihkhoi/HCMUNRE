#include<iostream>
using namespace std;
int main()
{
       int n, s = 0;
       cin >> n;
       for(int i = 3;i <= (2*n+1);i = i + 2)
       {
              s = s + i;
       }
       cout << s;
       return 0;
}