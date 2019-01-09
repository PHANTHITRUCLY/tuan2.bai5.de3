#include <iostream>
using namespace std;
#include <fstream>


void Nhap(float &n, float &p, float &q){
	ifstream doc;
	doc.open("FRACTIONS.INP");
	doc>>n>>p>>q;
	doc.close();
}

int UCLN(int a, int b) {
    if (b == 0) return a;
    return UCLN(b, a % b);
}

void Tim( float n, float p, float q){
	ofstream ghi;
	ghi.open("FRACTIONS.OUT");
	float ts, ms = 1;
	do{
		ts = 1;
		while(ts/ms < 1/q){
			if(ts/ms > 1/p  && UCLN(ts,ms) == 1 && ms < n) {
				cout<<endl<<ts<<"/"<<ms;
				ghi<<endl<<ts<<"/"<<ms;
				ts+=1;
			}
			else ts+=1;
		}
		ms++;
		
	}while(ms < n);
	cout<<endl<<"Ghi vo file thanh cong";
}



int main(){
	float n, p, q;
	Nhap(n,p,q);
	Tim(n,p,q);
}
