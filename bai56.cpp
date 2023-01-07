#include<iostream>
using namespace std;
int main()
{
       int s = 0, i;
       cin >> i;
       while(i != 0)
       {
              s = s + i%10;
              i = i /10;
       }
       cout << s;
       return 0;
}