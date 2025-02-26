#include<iostream>
using namespace std;
void swap(int a,int b);
main(){
	int a=90, b=89 ;
	swap(a,b);
	
}
void swap(int a,int b){
	int *p=&a;
	int *q=&b;
	int c;
	c = *p;
	*p = *q;
	c = *q;
	cout<<"A = "<<*p<<endl;
	cout<<"B = "<<*q<<endl;
	
	
}
