#include<iostream>
using namespace std; 


void myFunction(string fname)
{
	cout << fname <<" Refsnes\n";
}
int main() {
string fname;
	myFunction("bo");
	myFunction("me");
    myFunction("ba");
	
    return 0;	
} 
