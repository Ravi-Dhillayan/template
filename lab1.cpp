#include<iostream>
using namespace std;
 template <class T>
 struct fun{
 	T number ,sum =0,digit;
 };
 class sum{
 	struct fun<int> o;
 	public:
 		void Enter(){
 		 cout<<"Enter the positive integer Number : "<<endl;
		  cin>>o.number;
		  while(o.number >0){
		  	o.digit=o.number%10;
		  	o.sum+=o.digit;
		  	o.number=o.number/10;
		  }	
		 }
		 void show(){
		 	cout<<"Sum of Positive Integer Number : "<<o.sum;
		 }
 };
 int main(){
 	sum sumobj;
 	sumobj.Enter();
 	sumobj.show();
 }
