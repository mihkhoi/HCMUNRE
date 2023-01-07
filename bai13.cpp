#include<iostream>
using namespace std;
int main()
{
       string yn;
       q1:int a, b;
       cout << "Thang ";
       cin >> a;
       cout << "Nam ";
       cin >> b;
       cout << "Thang " << a << " Nam " << b << endl;
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
                     cout << "Ban co muon nhap lai(y/n): ";
                     cin >> yn;
                     if(yn=="y")
                     {
                            goto q1;
                     }
                     else
                     {
                            exit;
                     }
              }
       }
       cout << "\nBan co muon tiep tuc khong(y/n): ";
       cin >> yn;
       if(yn=="y")
       {
              goto q1;
       }
       else
       {
              exit;
       }
       return 0;
}