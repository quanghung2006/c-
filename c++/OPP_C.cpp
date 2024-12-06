#include<iostream>
using namespace std;

int function_total(int a, int b ,int type=1){
	int total = 0;
	if(type==1){
	 	total = a*b;
	 }
	else if(type==2){
	 	total = a+b;
	 }	
	return total;
}
 

   
int main(){
 int total;	
 total=function_total(1,2,2);
 cout << "Total: " << total;
return 0;	
}


