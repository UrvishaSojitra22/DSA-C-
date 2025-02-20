#include<iostream>
using namespace std;
void printNo(int a, int b);
main(){
	int a=0,b=5;
	printNo(a,b);
}
void printNo(int a, int b){
	int i=0;
	while(i<=5){
		cout<<"No :-"<<i<<endl;
		i++;
	}
}

