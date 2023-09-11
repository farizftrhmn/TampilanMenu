#include <iostream>
 
using namespace std;
 
int main()
{
  int pilihan;
  char ulang;
  do
  {
    cout << "##  Daftar Menu Kopi Ilkom  ##" << endl;
    cout << "==============================" << endl;
    cout << "1. Kopi" << endl;
    cout << "2. Teh" << endl;
    cout << "3. Nuntrisari " << endl;
    cout << "4. Tea Jus" << endl;
    cout << "5. Kuku Bima" << endl;
    cout << endl;
 
    cout << "Pilihan anda: ";
    cin >> pilihan;
 
    switch(pilihan){
    case 1:
        cout << "Anda memilih Kopi" << endl;
        break;
    case 2:
        cout << "Anda memilih Teh" << endl;
        break;
    case 3:
        cout << "Anda memilih Nutrisari" << endl;
        break;
    case 4:
        cout << "Anda memilih Tea Jus" << endl;
        break;
    case 5:
        cout << "Anda memilih Kuku Bima" << endl;
        break;
    default:
        cout << "Menu tidak tersedia" << endl;
    }
    cout << endl;
 
    cout << "Ingin memilih menu lain (y/t)? ";
    cin >> ulang;
    cout << endl;
  }
  while (ulang!= 't');
 
  cout << "Terimakasih...";
 
  cout << endl;
  return 0;
}
