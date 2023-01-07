#include<iostream>
using namespace std;
int max(int x, int y)
{
        int max = 0;
      if( x < y)
      {
              max = y;
      }
      else
      {
              max = x;
      }
      return max;      
}
int main()
{
       int x, y;
       cout << "Nhap a: ";
       cin >> x;
       cout << "Nhap b: ";
       cin >> y;
       cout << "Max: " << max(x,y);
       return 0;
}