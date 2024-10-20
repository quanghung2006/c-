#include <iostream>
using namespace std;

int main(){

int x,y;
//nhap hai so nguyen//
    cout <<"nhap so nguyen x :";
    cin>> x;
	cout << "nhap so nguyen y :";
	cin>> y ;
// tinh p,s//
    int p= x * y;
	int s= x + y;
	int total = s * 2 + p * (s - x) * (p + y)	;
//in ra ket qua//
    cout <<"p ="<< p << endl;
	cout <<"s="<< s << endl;
	cout << "total="<< total<< endl;
	
return 0;		
	
	
}
