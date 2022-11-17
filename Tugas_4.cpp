#include <iostream>
using namespace std;
int main(){
    int menu;
        cout << "===== Menu Makanan Mc'Yahud =====" << endl;
        cout << "1.Nasi Goreng Informatika" << endl;
        cout << "2.Nasi Soto Ayam Internet" << endl;
        cout << "3.Gado Gado Disket" << endl;
        cout << "4.Bubur Ayam LAN" << endl;

        cout << "Masukan Pilihan anda : ";
        cin >> menu;

    switch(menu){
    case 1:
        cout << "Nasi Goreng Informatika seharga Rp. 5000";
        break;
    case 2:
        cout << "Nasi Soto Ayam Internet seharga Rp. 7000";
        break;
    case 3:
        cout << "Gado Gado Disket seharga Rp. 4500";
        break;
    case 4:
        cout << "Bubur Ayam LAN seharga Rp. 4000";
        break;
    }


return 0;
}
