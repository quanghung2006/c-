#include<iostream>
using namespace std ;

int main (){
	int a, b;

// Nhap hai so nguyên//
    cout << "Nhap so nguyên thu nhat: ";
    cin >> a;
    cout << "Nhap so nguyên thu hai: ";
    cin >> b;
//tinh tong và trung bình//
  int tong=a+b;  
  float trung_binh= tong / 2  ;
// in man hinh //
  cout << "tong:"<<tong  << endl;
  cout <<"trung binh:"<< trung_binh<< endl;
 
return 0;  
}
