#include <iostream>
using namespace std;
int main(){
    string user;
    string pass;
        cout << "Masukan Username anda : ";
        cin >> user;
        cout << "Masukan Password anda : ";
        cin >> pass;
    if(user == "admin" && pass == "admin123"){
        cout << "Username sesuai, Password sesuai, Login Berhasil" << endl;

    }else if(user == "admin" && pass != "admin123" ){
        cout << "Username anda sesuai, Password tidak sesuai!" << endl;

    }else if(user != "admin"  && pass == "admin123" ){
        cout << "Username tidak sesuai, Password sesuai!" << endl;

    }else{
        cout << "Username dan Password tidak sesuai!" << endl;
    }

return 0;
}
