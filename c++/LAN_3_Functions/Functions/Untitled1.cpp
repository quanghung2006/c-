#include<iostream> 
using namespace std;

int abc=1999999; 

void myFunction(int a){

	cout <<  a;
	cout <<  abc;
}

string myFunction(string a) {
		cout <<  abc;
	cout << a;
 return "uiui"; 
}
 
int main(){

myFunction(123);
string a = myFunction("abcd");
  return 0; 
}
