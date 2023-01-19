#include <iostream>
#include <string.h>
using namespace std;

struct NhanVien // khai bao bien sinh vien
{
       string Hoten, Chucvu;
       int MaNV, Hesoluong;
       double thuclanh;
};

void Nhapnhanvien(NhanVien a[], int &n) // khai bao nhap
{
       cin.ignore();
       for (int i = 1; i <= n; i++)
       {
              cout << "Nhan vien thu " << i << ":";
              cout << "\nMa nhhan vien: ";
              cin >> a[i].MaNV;
              cout << "Ho va ten: ";
              cin.ignore();
              getline(cin, a[i].Hoten);
              cout << "He so luong: ";
              cin >> a[i].Hesoluong;
              cout << "Chuc vu: ";
              cin.ignore();
              getline(cin, a[i].Chucvu);
       }
}

void Xuatnhanvien(NhanVien a[], int &n) // khai bao xuat
{
       for (int i = 1; i <= n; i++)
       {
              cout << "\nNhan vien thu " << i << ":";
              cout << "\nMa nhan vien: " << a[i].MaNV;
              cout << "\nHo va ten: " << a[i].Hoten;
              cout << "\nHe so luong: " << a[i].Hesoluong;
              cout << "\nChuc vu: " << a[i].Chucvu;
       }
}

void idsltl(NhanVien a[], int n) // danh sach luong thuc lanh
{
       double lcb = 1210;
       for (int i = 1; i <= n; i++)
       {
              if (a[i].Chucvu == "Giam doc")
              {
                     a[i].thuclanh = a[i].Hesoluong + lcb + 500;
              }
              else if (a[i].Chucvu == "Truong phong")
              {
                     a[i].thuclanh = a[i].Hesoluong + lcb + 300;
              }
              else
              {
                     a[i].thuclanh = a[i].Hesoluong + lcb + 0;
              }
       }
       cout << "\nDanh sach luong thuc lanh: ";
       for (int i = 1; i <= n; i++)
       {
              cout << "\nNhan vien thu " << i << ":";
              cout << "\nMa nhan vien: " << a[i].MaNV;
              cout << "\nHo va Ten: " << a[i].Hoten;
              cout << "\nThuc lanh: " << a[i].thuclanh;
       }
}

int tongluong(NhanVien a[], int n) // tong luong tat ca nhan vien
{
       float tongluong = 0;
       for (int i = 1; i <= n; i++)
       {
              tongluong = tongluong + a[i].Hesoluong;
       }
       cout << "\nTong luong cua nhan vien: " << tongluong;
       return tongluong;
}

int tltlcn(NhanVien a[], int n) // tim luong thuc lanh cao nhat
{
       int max = a[0].thuclanh;
       for (int i = 1; i <= n; i++)
       {
              if (a[i].thuclanh > max)
              {
                     max = a[i].thuclanh;
              }
       }
       cout << "\nLuong thuc lanh cao nhat: " << max;
       return max;
}

void tncltlcn(NhanVien a[], int n) // tim thong tin nhan vien co luong thuc lanh cao nhat
{
       for (int i = 1; i <= n; i++)
       {
              if (a[i].thuclanh == tltlcn(a, n))
              {
                     cout << "\nThong tin nhan vien: ";
                     cout << "\nMa so nhan vien: " << a[i].MaNV;
                     cout << "\nHo va ten: " << a[i].Hoten;
                     cout << "\nHe so luong: " << a[i].Hesoluong;
                     cout << "\nChuc vu: " << a[i].Chucvu;
              }
       }
}

void inluong(NhanVien a[], int n)
{
       for (int i = 1; i <= n; i++)
       {
              cout << "\nLuong: " << a[i].thuclanh;
       }
}

void iltd(NhanVien a[], int n) // in ra bang luong theo thu tu ma so nhan vien giam dan
{
       int temp;
       cout << "\nBang luong danh sach nhan vien:";
       for (int i = 1; i <= n; i++)
       {
              for (int j = i + 1; j <= n; j++)
              {
                     if (a[i].MaNV < a[j].MaNV)
                     {
                            temp = a[i].MaNV;
                            a[i].MaNV = a[j].MaNV;
                            a[j].MaNV = temp;
                     }
              }
       }
       inluong(a, n);
}

int main() // ham chinh chay cac ham
{
       NhanVien a[1000];
       int n;
       cout << "Cho biet so nhan vien: ";
       cin >> n;
       Nhapnhanvien(a, n);
       Xuatnhanvien(a, n);
       idsltl(a, n);
       tongluong(a, n);
       tltlcn(a, n);
       tncltlcn(a, n);
       iltd(a, n);
       return 0;
}