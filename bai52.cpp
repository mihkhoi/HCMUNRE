#include<iostream>
using namespace std;
int main()
{
       int c;
       cin >> c;
       switch(c)
       {
              case 1:
              {
                     int s = 0;
                     for(int i = 1;i <= 100;i++)
                     {
                            s = s + i;
                     }
                     cout << s;
              }break;
              case 2:
              {
                     int n, s = 0;
                     cin >> n;
                     for(int i = 1;i <= n;i++)
                     {
                            s = s + i;
                     }
                     cout << s;
              }break;
              case 3:
              {
                     int m, n;
                     cin >> m >> n;
                     for(int i = m;i <= n;i++)
                     {
                            if(i%2 == 0)
                            {
                                   cout << i << " ";
                            }
                     }
              }break;
              default:
              {
                     cout << "Gia tri khong ton tai";
              }
       }
       return 0;
}