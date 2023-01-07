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
                     int n, d = 0;
                     cin >> n;
                     for(int i = 1;i <= n;i++)
                     {
                            if(i%2 == 0)
                            {
                                   d++;
                            }
                     }
                     cout << d;
              }break;
              case 2:
              {
                     int m, n;
                     cin >> m >> n;
                     for(int i = m;i <= n;i++)
                     {
                            if((i/10)%10 == 2 || ((i/10)%10 && i%10 == 2))
                            {
                                   cout << i << " ";
                            }
                     }
              }break;
              case 3:
              {
                     int s = 0;
                     for(int i = 10;i <= 99;i++)
                     {
                            if(i%2 == 0 && i < 100)
                            {
                                   s = s + i;
                            }
                     }
                     cout << s;
              }break;
              case 4:
              {
                     int d = 0;
                     for(int i = 10;i <= 99;i++)
                     {
                            if(i%3 == 0)
                            {
                                   d++;
                            }
                     }
                     cout << d;
              }break;
              case 5:
              {
                     int n, a, b;
                     cin >> n >> a >> b;
                     for(int i = a;i <= b;i++)
                     {
                            if(n%i == 0)
                            {
                                   cout << i << " ";
                            }
                     }
              }break;
              case 6:
              {
                     int a, b, c;
                     for(int i = 100; i < 1000;i++)
                     {
                            a = i/100;
                            b = (i%100)/10;
                            c = i%10;
                            if((a+b+c)%2 == 0)
                            {
                                   cout << i << " ";
                            }
                     }
              }break;
              case 7:
              {
                     for(int i = 1;i <= 9;i++)
                     {
                            for(int j = 0;j <= 9;j++)
                            {
                                   for(int k = 0;k <= 9;k++)
                                   {
                                          if(i != j && j != k && k != i)
                                          {
                                                 cout << i << j << k << " ";
                                          }
                                   }
                            }
                     }
              }break;
              default:
              {
                     cout << "Gia tri khong hop le";
              }
       }
       return 0;
}