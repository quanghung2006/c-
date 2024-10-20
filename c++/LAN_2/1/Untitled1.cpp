#include<iostream>
using namespace std;

int main() { 
  int a,b;
//nhap hai so nguyen//
     cout << "so nguyen thu nhat :";
     cin >> a;
	 cout << "so nguyen thu hai :";
	 cin >> b;
//tinh toan//
    int tong= a+b ;
	int hieu= a-b;
	int tich= a*b;
	int thuong= a/b;
// in ra man hinh//
    cout << "Tong: "<< tong <<::endl ; 
    cout << "Hieu: "<<hieu << ::endl ;
    cout << "Tich: "<< tich << ::endl;
	cout << "thuong"<< thuong << ::endl ;
	
return 0;
}
