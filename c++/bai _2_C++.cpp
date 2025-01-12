#include<iostream>
using namespace std;
int tinh_toan(int a, int b, int c) {
    return a + b + c; 
}
int main(){
 int a ,b ,c;	
   cout <<"nhap ba so nguyen a:";
 cin >> a;
   cout <<"nhap ba so nguyen b:";
 cin >> b;
   cout <<"nhap ba so nguyen c:";
 cin >> c;
  int tong = tinh_toan(a, b, c);{
     cout<< "Tong cua " << a << ", " << b << " va " << c << " la: " << tong << endl;
    }
 



return 0;
}
