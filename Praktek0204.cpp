#include<iostream>

using namespace std;

int main(){
	double lurum,par=1.87596,jumbi,bipar,bipas,jumbox,tobil,x,y; 
	
	cout<<"Luas Rumah\t\t: ";
	cin>>lurum;
	cout<<"Jumlah Box Parket\t: ";cin>>jumbi;
	cout<<"-----------------------------------------";
	cout<<"Luas Rumah\t\t: "<<lurum;cout<<"m2"<<endl;
	x=par*jumbi;
	y=lurum/x;
	jumbox=y*234.495;
	cout<<"Jumlah Box Parket\t: "<<jumbox<<endl;
	bipar=jumbox*500;
	cout<<"Biaya Parket (Rp)\t: "<<bipar<<endl;
	bipas=lurum*20;
	cout<<"Biaya Pasang (Rp)\t: "<<bipas<<endl;
	tobil=bipar+bipas;
	cout<<"Total Biaya (Rp)\t: "<<tobil<<endl;	
		
}
