#include<iostream>
using namespace std;
int main()
{
       int n, s = 0;
       cin >> n;
       for(int i = 4; i <= (2*n + 2); i = i + 2)
       {
              s = s + i;
       }
       cout << s;
       return 0;
}