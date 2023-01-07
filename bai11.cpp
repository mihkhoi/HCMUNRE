#include<iostream>
using namespace std;
int main()
{
       int c;
       cout << "==============Menu=============" << endl;
       cout << "Mon 1: Com dui ga" << endl;
       cout << "Mon 2: Com du ga goc tu" << endl;
       cout << "Mon 3: Com suon" << endl;
       cout << "Mon 4: Com suon cha" << endl;
       cout << "Mon 5: Com suon bi" << endl;
       cout << "Mon 6: Com suon trung" << endl;
       cout << "Mon 7: Com cha trung" << endl;
       cout << "Mon 8: Com Cha bi" << endl;
       cout << "Mon 9: Com suon cha trung" << endl;
       cout << "Mon 10: Com suon bi cha" << endl;
       cout << "Mon 11: Com suon bi cha trung" << endl;
       cout << "Mon 12: Com ba roi nuong" << endl;
       cout << "Chon: ";
       cin >> c;
       switch (c)
       {
       case 1:
       {
              cout << "Mon 1: Com dui ga - gia 30.000 dong";
       }break;
       case 2:
       {
              cout << "Mon 2: Com du ga goc tu - gia 37.000 dong";
       }break;
       case 3:
       {
              cout << "Mon 3: Com suon - gia 30.000 dong";
       }break;
       case 4:
       {
              cout << "Mon 4: Com suon cha - gia 37.000 dong";
       }break;
       case 5:
       {
              cout << "Mon 5: Com suon bi - gia 37.000 dong";
       }break;
       case 6:
       {
              cout << "Mon 6: Com suon trung - gia 37.000 dong";
       }break;
       case 7:
       {
              cout << "Mon 7: Com cha trung - gia 35.000 dong";
       }break;
       case 8:
       {
              cout << "Mon 8: Com Cha bi - gia 30.000 dong";
       }break;
       case 9:
       {
              cout << "Mon 9: Com suon cha trung - gia 41.000 dong";
       }break;
       case 10:
       {
              cout << "Mon 10: Com suon bi cha - gia 41.000 dong";
       }break;
       case 11:
       {
              cout << "Mon 11: Com suon bi cha trung - gia 45.000 dong";
       }break;
       case 12:
       {
              cout << "Mon 12: Com ba roi nuong - gia 39.000 dong";
       }break;
       default:
              cout << "Khong co mon an nay";
       }
       return 0;
}