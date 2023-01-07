#include<iostream>
using namespace std;
int main()
{
       int toan, ly, hoa, t, l, h, hs;
       float tb;
       cout << "Nhap diem thi va he so mon toan: ";
       cin >> toan >> t;
       cout << "Nhap diem thi va he so mon li: ";
       cin >> ly >> l;
       cout << "Nhap diem thi va he so mon hoa: ";
       cin >> hoa >> h;
       hs = t+l+h;
       tb = ((toan*t) + (ly*l) + (hoa*h))/ hs;
       cout << "Diem trung binh 3 mon: " << tb;
       return 0;
}