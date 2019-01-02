#include<iostream>
using namespace std;
int main (){
char status;
int E,m,c;

do {
cout<<"Masukkan Nilai m = ";
cin>>m;

cout<<"Masukkan Nilai c = ";
cin>>c;

//rumus
E=m*c*c;

cout<<"Maka Nilai E adalah = "<<E<<endl;

cout<<"Apakah Anda ingin Menghitung ulang ? ";
cin>>status;

}while(status=='Y'||status=='y');
cout<<"thanks"<<endl;
return 0;
}

