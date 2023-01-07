#include<iostream>
using namespace std;

int tn(int n)
{
       int s = 0;
       for(int i = 1;i <= n;i++)
       {
              s = s + i;
       }
       return s;
}

void ngay(int a, int b)
{
       switch(a)
       {
              case 1:
              {
                     cout << "Co 31 ngay";
              }break;
              case 2:
              {
                     if(b%4==0 || b%400==0)
                     {
                            cout << "Co 29 ngay";
                     }
                     else
                     {
                            cout << "Co 28 ngay";
                     }
              }break;
              case 3:
              {
                     cout << "Co 31 ngay";
              }break;
              case 4:
              {
                     cout << "Co 30 ngay";
              }break;
              case 5:
              {
                     cout << "Co 31 ngay";
              }break;
              case 6:
              {
                     cout << "Co 30 ngay";
              }break;
              case 7:
              {
                     cout << "Co 31 ngay";
              }break;
              case 8:
              {
                     cout << "Co 31 ngay";
              }break;
              case 9:
              {
                     cout << "Co 30 ngay";
              }break;
              case 10:
              {
                     cout << "Co 31 ngay";
              }break;
              case 11:
              {
                     cout << "Co 30 ngay";
              }break;
              case 12:
              {
                     cout << "Co 31 ngay";
              }break;
              default:
              {
                     cout << "Gia tri khong ton tai";
              }
       }
}

void dc(float a, float b)
{
       int temp = a;
       a = b;
       b = temp;
       cout << a << " " << b;
}

int bcnn(int a, int b)
{
       int step, kq;
       if(a > b)
       {
              step = a;
       }
       else
       {
              step = b;
       }
       for(int i = step;i <= a*b;i+=step)
       {
              if(i%a == 0 && i%b == 0)
              {
                     kq = i;
              }
       }
       return kq;
}

void kt(int n)
{
       int i, check = 1;
       do
       {
              i = n%10;
              if(i%2 == 0)
              {
                     check = 0;
                     break;
              }
       } while (n /= 10);
       if(check == 1)
       {
              cout << "Yes";
       }
       else
       {
              cout << "No";
       }
}
int main()
{
       int c;
       cin >> c;
       switch(c)
       {
              case 1:
              {
                     int n;
                     cin >> n;
                     cout << tn(n);
              }break;
              case 2:
              {
                     int a, b;
                     cin >> a >> b;
                     ngay(a,b);
              }break;
              case 3:
              {
                     float a, b;
                     cin >> a >> b;
                     dc(a,b);
              }break;
              case 4:
              {
                     int a, b;
                     cin >> a >> b;
                     cout << bcnn(a,b);
              }break;
              case 5:
              {
                     int n;
                     cin >> n;
                     kt(n);
              }break;
              default:
              {
                     cout << "Gia tri khong ton tai";
              }
       }
       return 0;
}