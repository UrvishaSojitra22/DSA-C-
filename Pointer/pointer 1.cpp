#include<iostream>
using namespace std;
main(){
	int a[50] = {23,4,3,2,45},i;
	int *p = a;
	for(i=0; i<5;i++){
		cout<<a[i]<<"Addresh :- "<<p<<endl;
		p++;
	}
}
