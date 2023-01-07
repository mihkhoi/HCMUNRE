#include<iostream>
using namespace std;
int main()
{
       int a;
       cin >> a;
       if(a%4 == 0 || a%400 == 0)
       {
              cout << a << " la nam nhuan";
       }
       else
       {
              cout << a << " khong phai la nam nhuan";
       }
       return 0;
}