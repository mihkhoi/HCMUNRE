#include<iostream>
using namespace std;
int main()
{
       int c;
       cout << "1. Hinh vuong" << endl;
       cout << "2. Hinh chu nhat" << endl;
       cout << "3. Hinh tron" << endl;
       cout << "Chon: ";
       cin >> c;
       switch(c)
       {
              case 1:
              {
                     float a, b, p, s;
                     cin >> a >> b;
                     p = (a + b)* 2;
                     s = a * b;
                     cout << "Chu vi hinh vuong: " << p << endl;
                     cout << "Dien tich hinh vuong: " << s;
              }break;
              case 2:
              {
                     float a, b, p, s;
                     cin >> a >> b;
                     p = a * 4;
                     s = a * a;
                     cout << "Chu vi hinh chu nhat: " << p << endl;
                     cout << "Dien tich hinh chu nhat: " << s;
              }break;
              case 3:
              {
                     float r, c, s;
                     cin >> r;
                     c = r * 2 * 3.14;
                     s = r * r *  3.14;
                     cout << "Chu vi hinh tron: " << c << endl;
                     cout << "Dien tich hinh tron:" << s; 
              }break;
              default:
              {
                     cout << "Gia tri khong hop le";
              }
       }
       return 0;
}