#include<iostream>
using namespace std;
int main()
{
       string a, l, m;
       float b, c, hp;
       cout << "Nhap Ho va ten: ";
       getline(cin,a);
       cout << "Nhap lop: ";
       cin >> l;
       cout << "Nhap mon: ";
       cin >> m;
       cout << "Nhap diem giua ky: ";
       cin >> b;
       cout << "Nhap diem thi: ";
       cin >> c;
       if(m == "ltcb" || m == "cnpm")
       {
              hp= b*0.4 + c*0.6;
       }
       else
       {
              hp= b*0.3 + c*0.7;
       }
       cout << "Ho va ten: " << a << endl;
       cout << "Lop: " << l << endl;
       cout << "Ket qua mon " << m << " : " << hp;
       if(hp < 4.0)
       {
              cout << "Hoc lai";
       }
       return 0;
}