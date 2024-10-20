#include <iostream>
using namespace std;

int main(){
	 int so;

// Nhap so nguyên//
    cout << "Nhap mot so nguyen: ";
    cin >> so;

// in ket qua//
    if (so > 100) {
       cout << "So ban nhap lon hon 100." << endl;
    } else if (so < 100) {
        cout << "So ban nhap nho hon 100." << endl;
    } else {
        cout << "So ban nhap bang 100." << endl;
    }
return 0;	
}
