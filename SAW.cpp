#include <iostream>
#include <cmath>
using namespace std;

int main(){
	// DEKLARASI VARIABEL
	double a[3][5] = {a[0][1], a[2][4]};	
	double r [3][5]= {r[0][1],r[2][4]};
	double rw [3][5]= {rw[0][1],rw[2][4]};
	
	double w[5]={5,3,4,4,2};
	double maxc [5]= {maxc[0],maxc[4]};
	double ha[3];
	
	// SETTING PRESISI DESIMAL
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);
	
	
	cout << "MATRIKS X :"<<endl;	
	x[0][0]=4;	x[0][1]=4;	x[0][2]=5;	x[0][3]=3;	x[0][4]=3;
	x[1][0]=3;	x[1][1]=3;	x[1][2]=4;	x[1][3]=2;	x[1][4]=3;
	x[2][0]=5;	x[2][1]=4;	x[2][2]=2;	x[2][3]=2;	x[2][4]=2;

	for(int k=0;k<3;k++){
	for(int l=0;l<5;l++){
			cout<<x[k][l]<<" | ";
		}cout<<endl;
	}

	
	// AMBIL NILAI MAX TIAP KRITERIA
	for(int i=0;i<5;i++) {
		maxc[i+0]=max(x[0][i],max(x[1][i],x[2][i]));
	}

	// BUAT MATRIKS R
	r[0][0] = (x[0][0]/maxc[0]);	r[0][1] = (x[0][1]/maxc[1]);	r[0][2] = (x[0][2]/maxc[2]);	r[0][3] = (x[0][3]/maxc[3]);	r[0][4] = (x[0][4]/maxc[4]);
	r[1][0] = (x[1][0]/maxc[0]);	r[1][1] = (x[1][1]/maxc[1]);	r[1][2] = (x[1][2]/maxc[2]);	r[1][3] = (x[1][3]/maxc[3]);	r[1][4] = (x[1][4]/maxc[4]);
	r[2][0] = (x[2][0]/maxc[0]);	r[2][1] = (x[2][1]/maxc[1]);	r[2][2] = (x[2][2]/maxc[2]);	r[2][3] = (x[2][3]/maxc[3]);	r[2][4] = (x[2][4]/maxc[4]);	

	cout<<endl<<"BOBOT R : "<<endl;	
	for(int i=0;i<3;i++){
		for(int j=0;j<5;j++){
			cout<<r[i][j]<<" | ";}
			cout<<endl;	}


	cout<<endl<<"BOBOT W : "<<endl;
	for(int i=0;i<5;i++){
	cout<<w[i]<<" | ";
	}cout<<endl;
		
	// MATRIKS R * W
	cout<<endl<<"MATRIK R * W : "<<endl;
	for(int i=0;i<3;i++){
	for(int j=0;j<5;j++){
	rw[i][j]=r[i][j]*w[j]; cout<<rw[i][j]<<" | ";
		}cout<<endl;
	}
		
	cout << "HASIL AKHIR  :"<<endl;
	cout << "Nilai A1 : "<<ha1<<endl;
	cout << "Nilai A2 : "<<ha2<<endl;
	cout << "Nilai A3 : "<<ha3<<endl;
}
