#include <iostream>
using namespace std;
int main(){
    int tahun;

	cout<<"Masukan Tahun : ";
	cin>>tahun;

	if (tahun %400==0){
		cout <<" adalah tahun kabisat"<< tahun <<endl;

	}else if (tahun %100==0){
		cout <<" bukan tahun kabisat"<< tahun <<endl;

	}else if (tahun %4==0){
		cout << tahun <<" adalah tahun kabisat" <<endl;

	}else {
		cout << tahun <<" bukan tahun kabisat" <<endl;
	}

return 0;
}
