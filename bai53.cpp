#include<iostream>
using namespace std;
int main()
{
       int n;
       cin >> n;
       switch(n)
       {
              case 0:
              {
                     cout << "Khong";
              }break;
              case 1:
              {
                     cout << "Mot";
              }break;
              case 2:
              {
                     cout << "Hai";
              }break;
              case 3:
              {
                     cout << "Ba";
              }break;
              case 4:
              {
                     cout << "Bon";
              }break;
              case 5:
              {
                     cout << "Nam";
              }break;
              case 6:
              {
                     cout << "Sau";
              }break;
              case 7:
              {
                     cout << "Bay";
              }break;
              case 8:
              {
                     cout << "Tam";
              }
              case 9:
              {
                     cout << "Chin";
              }break;
              default:
              {
                     cout << "Gia tri khong ton tai";
              }
       }
       return 0;
}