 #include <iostream>
using namespace std ;

int main(){
// khai báo//
float doanhthu;
float hoahong;
//in man hình //
cout<< "nhap doanh thu ban hang (don vi hang trieu): ";
cin>> doanhthu;
//so sánh//

 if(doanhthu<=100){
hoahong=doanhthu*5/100 ;
cout <<"tong doanh thu la:"<<doanhthu<< "tr" <<endl;
cout << "hoa hong nhan duoc la :"<<hoahong<< endl ;

}
else if(doanhthu<=300){	
hoahong=doanhthu *10/100;
cout <<"tong doanh thu la :"<<doanhthu<< endl ;
cout << "hoa hong nhan duoc la :"<<hoahong<<endl ;
}
else if (doanhthu > 300){
hoahong=doanhthu* 20/100 ;
cout <<"tong doanh thu la:"<<doanhthu<<endl ;
cout << "hoa hong nhan duoc la :"<<hoahong<<endl ;
}

return 0;
}
