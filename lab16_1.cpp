#include<iostream>
using namespace std;

int main(){
	int nA,nB;
	int *A,*B,**C; // **star?	
	
	cout << "Length of A: ";
	cin >> nA;
	
	A = new int;
	cout << "Input Array A: ";
	for(int i=0; i < nA; i++) cin >> A[i];
	
	cout << "Length of B: ";
	cin >> nB;
	
	B = new int;
	cout << "Input Array B: ";
	for(int i=0; i < nB; i++) cin >> B[i];
	
	C = new int *[nA];//อย่าลืม Star 
	for(int i=0; i < nA; i++) C[i] = *new int [nB];
	
	for(int i=0; i < nA; i++){
		for(int j=0; j < nB; j++) {
			C[i][j] = A[i]*B[j]; //Array 2D
		}
	}
	
	cout << "\t";
	for(int i=0; i < nB; i++){
		cout << B[i] << "\t";
	}
	cout << "\n-----------------------------\n";
	
	for(int i=0; i < nA; i++){
		cout << A[i] << "\t";
		for(int j=0; j < nB; j++) {
			cout << C[i][j] << "\t"; //ตอน output ต้องเป็น 2D เลยต้องพิมพ์ [i][j]
		}
		cout << "\n";
	}
     for(int i=0;i<nA;i++) delete[]C[i];
     delete C; //ตรงนี้งงทำไม loop?
	return 0;
}
