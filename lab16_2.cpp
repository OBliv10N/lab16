#include<iostream>
#include<string>
using namespace std;

void myString(char *&p,int M){
    p = new char[M+1];
    for(int i = 0; i < M;i++) p[i] = 'A'+i;
    p[M]= 0;
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
