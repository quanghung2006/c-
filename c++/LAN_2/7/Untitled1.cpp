#include<iostream>
using namespace std;

int main(){
	 int a, b, c;
    cout << "Nhap ba so nguyen: ";
    cin >> a >> b >> c;

    int max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
   cout << "Gia tri lon nhat la: " << max <<endl;
   
return 0;   	
	
}