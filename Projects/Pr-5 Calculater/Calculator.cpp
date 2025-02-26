#include<iostream>
using namespace std;

int sum(int a,int b);
int min(int a,int b);
int mul(int a,int b);
int	div(int a,int b);
int modulo(int a,int b);
main(){
	int a,b,choise;
	while(1){
		cout<<"Enter Press 1 + "<<endl;
		cout<<"Enter Press 2 - "<<endl;
		cout<<"Enter Press 3 * "<<endl;
		cout<<"Enter Press 4 / "<<endl;
		cout<<"Enter Press 5 % "<<endl;
		cout<<"Enter Press 0 + "<<endl;
		cin>>choise;
	
		if(choise == 0){
			cout<<"Thank you once more visit"<<endl;
			break;
		}
		switch(choise){
			case 1:
				cout<<"Enter no A :- ";
				cin>>a;
				cout<<"Enter no B :- ";
				cin>>b;
				cout<<"Sum :- "<<sum(a,b)<<endl;
			break;
				case 2:
				cout<<"Enter no A :- ";
				cin>>a;
				cout<<"Enter no B :- ";
				cin>>b;
				cout<<"min :- "<<min(a,b)<<endl;
			break;
			case 3:
				cout<<"Enter no A :- ";
				cin>>a;
				cout<<"Enter no B :- ";
				cin>>b;
				cout<<"mul :- "<<mul(a,b)<<endl;
				
			break;
			case 4:
				cout<<"Enter no A :- ";
				cin>>a;
				cout<<"Enter no B :- ";
				cin>>b;
				cout<<"div :- "<<div(a,b)<<endl;
			break;
			case 5:
				cout<<"Enter no A :- ";
				cin>>a;
				cout<<"Enter no B :- ";
				cin>>b;
				cout<<"modulo :- "<<modulo(a,b)<<endl;
			break;
			
			default:
				cout<<"Not valid choise"<<endl;
		}
}
}
int sum(int a, int b) {
    return a + b;
}

int min(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int div(int a,int b){
	if(b==0){
		cout<<"Can not divided by zero"<<endl;
	}
	return a/b;
}
int modulo(int a,int b){
	if(b==0){
		cout<<"Can not modulo by zero"<<endl;
	}
	return a % b;
}

