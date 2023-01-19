#include <iostream>
#include <string.h>
using namespace std;

struct ThiSinh // Khai bao bien cho cau truc thi sinh
{
      string Hoten, XeploaiTN;
      double Khuvucthi, Diemc, Diemut, Toan, Ly, Hoa, Diemtb, Tongdiem, vt, MaTS, maxtoan, thukhoa;
};

void NhapTS(ThiSinh a[], int &n) // Khai bao ham nhap cac thong tin cua thi sinh
{
      cin.ignore();
      for (int i = 1; i <= n; i++)
      {
            cout << "\nThong tin thi sinh " << i << ":";
            cout << "\nMa so thi sinh: ";
            cin >> a[i].MaTS;
            cout << "Ho va Ten: ";
            cin.ignore();
            getline(cin, a[i].Hoten);
            do
            {
                  cout << "Nhap diem toan: ";
                  cin >> a[i].Toan;
            } while (a[i].Toan < 0 || a[i].Toan > 10);
            do
            {
                  cout << "Nhap diem ly: ";
                  cin >> a[i].Ly;
            } while (a[i].Ly < 0 || a[i].Ly > 10);
            do
            {
                  cout << "Nhap diem hoa: ";
                  cin >> a[i].Hoa;
            } while (a[i].Hoa < 0 || a[i].Hoa > 10);
            do
            {
                  cout << "Nhap khu vuc thi: ";
                  cin >> a[i].Khuvucthi;
            } while (a[i].Khuvucthi < 0 || a[i].Khuvucthi > 3);
      }
}

void XuatTS(ThiSinh a[], int n) // Khai bao ham xuat danh sach thi sinh
{
      cout << "\nDanh sach thi sinh:";
      for (int i = 1; i <= n; i++)
      {
            cout << "\nThi sinh thu " << i << ":";
            cout << "\nMa so thi sinh: " << a[i].MaTS;
            cout << "\nHo va Ten: " << a[i].Hoten;
            cout << "\nDiem toan: " << a[i].Toan;
            cout << "\nDiem ly: " << a[i].Ly;
            cout << "\nDiem Hoa: " << a[i].Hoa;
            cout << "\nKhu vuc thi: " << a[i].Khuvucthi;
      }
}

void Diemtrungbinh(ThiSinh a[], int n) // Tinh diem trung binh 3 mon toan ly hoa
{
      for (int i = 1; i <= n; i++)
      {
            a[i].Diemtb = (a[i].Toan + a[i].Ly + a[i].Hoa) / 3;
      }
}

void Diemcong(ThiSinh a[], int n, int x) // Tinh diem cong
{
      for (int i = 1; i <= n; i++)
      {
            if (x == i)
            {
                  a[i].vt = i;
                  for (int i = a[i].vt; i <= a[i].vt; i++)
                  {
                        if (a[i].Diemtb > 8)
                        {
                              a[i].Diemc = 2;
                        }
                        else if (a[i].Diemtb > 7 && a[i].Diemtb < 8)
                        {
                              a[i].Diemc = 1;
                        }
                        else
                        {
                              a[i].Diemc = 0;
                        }
                  }
            }
      }
}

void Diemuutien(ThiSinh a[], int n, int x) // Diem cong cho khu vuc uu tien
{
      for (int i = 1; i <= n; i++)
      {
            if (x == i)
            {
                  a[i].vt = i;
                  for (int i = a[i].vt; i <= a[i].vt; i++)
                  {
                        if (a[i].Khuvucthi == 3)
                        {
                              a[i].Diemut = 2;
                        }
                        else if (a[i].Khuvucthi == 2)
                        {
                              a[i].Diemut = 1;
                        }
                        else
                        {
                              a[i].Diemut = 0;
                        }
                  }
            }
      }
}

void Tinhdiemtong(ThiSinh a[], int n, int x) // Tong diem thi
{
      for (int i = 1; i <= n; i++)
      {
            if (x == i)
            {
                  a[i].vt = i;
                  for (int i = a[i].vt; i <= a[i].vt; i++)
                  {
                        a[i].Tongdiem = a[i].Toan + a[i].Ly + a[i].Hoa + a[i].Diemc + a[i].Diemut;
                  }
            }
      }
}

void Indanhsachthisinh(ThiSinh a[], int n) // In ra danh nhanh cac thi sinh da nhap
{
      cout << "\nDanh sach thi sinh: ";
      for (int i = 1; i <= n; i++)
      {
            cout << "\nThong tin thi sinh " << i << ":";
            cout << "\nHo va Ten: " << a[i].Hoten;
            cout << "\nDiem toan: " << a[i].Toan;
            cout << "\nDiem ly: " << a[i].Ly;
            cout << "\nDiem hoa: " << a[i].Hoa;
            cout << "\nDiem cong: " << a[i].Diemc;
            cout << "\nDiem uu tien: " << a[i].Diemut;
            cout << "\nTong diem: " << a[i].Tongdiem;
      }
}

void indanhsachdau(ThiSinh a[], int n) // In ra danh sach nhung thi sinh dau
{
      cout << "\nDanh cac thi sinh dau:";
      for (int i = 1; i <= n; i++)
      {
            if (a[i].Tongdiem >= 15)
            {
                  cout << "\nThong tin thi sinh " << i << ":";
                  cout << "\nMa so thi sinh: " << a[i].MaTS;
                  cout << "\nHo va ten: " << a[i].Hoten;
                  cout << "\nTong diem: " << a[i].Tongdiem;
            }
      }
}

void timmaso(ThiSinh a[], int n, int x) // in ra thong tin can tim
{
      for (int i = 1; i <= n; i++)
      {
            if (x == a[i].MaTS)
            {
                  cout << "\nHo va ten: " << a[i].Hoten;
                  cout << "\nDiem toan: " << a[i].Toan;
                  cout << "\nDiem ly: " << a[i].Ly;
                  cout << "\nDiem hoa: " << a[i].Hoa;
                  cout << "\nDiem cong: " << a[i].Diemc;
                  cout << "\nDiem uu tien: " << a[i].Diemut;
                  cout << "\nTong diem: " << a[i].Tongdiem;
            }
      }
}

void timdiemtoancao(ThiSinh a[], int n) // Tim thi sinh co diem toan cao nhat
{
      for (int i = 1; i <= n; i++)
      {
            a[i].maxtoan = a[1].Toan;
            if (a[i].Toan > a[i].maxtoan)
            {
                  a[i].maxtoan = a[i].Toan;
                  cout << "\nDiem toan cao nhat: " << a[i].maxtoan;
                  cout << "\nThi sinh co diem toan cao nhat: " << a[i].Hoten;
            }
      }
}

void inthukhoa(ThiSinh a[], int n) // In ra thi sinh diem tong cao nhat
{
      for (int i = 1; i <= n; i++)
      {
            a[i].thukhoa = a[1].Tongdiem;
            if (a[i].Tongdiem > a[i].thukhoa)
            {
                  a[i].thukhoa = a[i].Tongdiem;
                  cout << "\nThong tin thi sinh dat thu khoa: ";
                  cout << "\nMa so thi sinh: " << a[i].MaTS;
                  cout << "\nHo va Ten: " << a[i].Hoten;
                  cout << "\nDiem toan: " << a[i].Toan;
                  cout << "\nDiem ly: " << a[i].Ly;
                  cout << "\nDiem hoa: " << a[i].Hoa;
                  cout << "\nDiem cong: " << a[i].Diemc;
                  cout << "\nDiem uu tien: " << a[i].Diemut;
                  cout << "\nTong diem: " << a[i].Tongdiem;
            }
      }
}

void tinhtilephandau(ThiSinh a[], int n)
{
      int s = 0, t = 0;
      for (int i = 1; i <= n; i++)
      {
            if (a[i].Tongdiem >= 15)
            {
                  s = s + i;
            }
      }
      for (int i = 1; i <= n; i++)
      {
            t = t + i;
      }
      cout << "\nTi le phan tram dau cua ki thi: " << (s / t) * 100 << "%";
}

int main()
{
      ThiSinh a[1000];
      int n;
      int x;
      cout << "Cho biet so luong thi sinh: ";
      cin >> n;
      NhapTS(a, n);
      XuatTS(a, n);
      cout << "\n";
      cout << "\nTinh diem cong: ";
      do
      {
            cout << "\nNhap vao vi tri thi sinh muon nhap luu: ";
            cin >> x;
      } while (x < 0 || x > n);
      Diemtrungbinh(a, n);
q1:
      Diemcong(a, n, x);
      cout << "Nhap vao vi tri thi sinh muon nhap luu: ";
      cin >> x;
      if (x >= 1 && x <= n)
      {
            goto q1;
      }
      else
      {
            goto q2;
      }
q2:
      cout << "\nTinh diem khu vuc uu tien: ";
      do
      {
            cout << "\nNhap vao vi tri thi sinh muon nhap luu: ";
            cin >> x;
      } while (x < 0 || x > n);
q3:
      Diemuutien(a, n, x);
      cout << "Nhap vao vi tri thi sinh muon nhap luu: ";
      cin >> x;
      if (x >= 1 && x <= n)
      {
            goto q3;
      }
      else
      {
            goto q4;
      }
q4:
      cout << "\nTinh diem tong: ";
      do
      {
            cout << "\nNhap vao vi tri thi sinh muon nhap luu: ";
            cin >> x;
      } while (x < 0 || x > n);
q5:
      Tinhdiemtong(a, n, x);
      cout << "Nhap vao vi tri thi sinh muon nhap luu: ";
      cin >> x;
      if (x >= 1 && x <= n)
      {
            goto q5;
      }
      else
      {
            goto q6;
      }
q6:
      Indanhsachthisinh(a, n);
      indanhsachdau(a, n);
      cout << "\nTim thi sinh bang ma so:";
      cout << "\nNhap ma so thi sinh can tim: ";
      cin >> x;
q7:
      timmaso(a, n, x);
      cout << "\nNhap ma so thi sinh can tim: ";
      cin >> x;
      if (x >= 1 && x <= n)
      {
            goto q7;
      }
      else
      {
            goto q8;
      }
q8:
      timdiemtoancao(a, n);
      cout << "\n";
      inthukhoa(a, n);
      cout << "\n";
      tinhtilephandau(a, n);
      return 0;
}