#include<iostream>
using namespace std;

void myFunction(int myNum[100]){
	for(int i=0 ; i<10 ; i++) {
	cout<<myNum[i]<<"\n";	
	}
}
int main(){
	int myNum[10]={1,2,3,4,5,6,7,8,9,10};
	myFunction(myNum);
	
return 0;	

}
