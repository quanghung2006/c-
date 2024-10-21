#include <iostream>
using namespace std;

int main(){
	int tuoi;

 // Nhap tuoi
    cout << "Nhap tuoi cua hoc sinh: ";
    cin >> tuoi;// = 16
    
// dieu kien de vao lop 10//
    if (tuoi < 16) {
        cout << "Hoc sinh khong du dieu kien vào lop 10." << endl;
    } else {
        cout << "Hoc sinh du dieu kien vào lop 10." << endl;
    }
return 0;	
	
}
