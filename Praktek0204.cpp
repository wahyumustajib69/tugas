#include<iostream>

using namespace std;

int main(){
	double lurum,par=1.87596,jumbi,bipar,bipas,jumbox,tobil,x,y; 
	
	cout<<"LUAS RUMAH\t\t";
	cin>>lurum;
	cout<<"Jumlah Box Perket";cin>>jumbox;
	cout<<"Luas Rumah : "<<lurum;cout<<"m2"<<endl;
	x=par*jumbi;
	y=lurum/x;
	jumbox=y*193/100;
	cout<<"Jumlah Box Parket:"<<jumbox<<endl;
	bipar=jumbox*500;
	cout<<"Biaya Parket (Rp) : "<<bipar<<endl;
	bipas=lurum*20;
	cout<<"Biaya Pasang (Rp) : "<<bipas<<endl;
	tobil=bipar+bipas;
	cout<<"Total Biaya (Rp) : "<<tobil<<endl;
	
		
}
