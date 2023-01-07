#include<iostream>
using namespace std;
int main()
{
       int a, b;
       cout << "Nhap a= ";
       cin >> a;
       cout << "Nhap b= ";
       cin >> b;
       if(a == 0)
       {
              if(b == 0)
              {
                     cout << "Phuong trinh co vo so nghiem";
              }
              else
              {
                     cout << "Phuong trinh vo nghiem";
              }
       }
       else
       {
              cout << "Phuong trinh co 1 nghiem x= " << -b/a;
       }
       return 0;
}