#include<iostream>
using namespace std;

	template <class Ravi>
class str{
	int sum=0,r,temp;

	public:
		struct fun{
		
			Ravi n;
		};
		void function(){
			fun o;
			cout<<" We will enter a number and we want to check whether the entered number is Armstrong or not : "<<endl;
			cout<<"Please Enter the number : "<<endl;
			cin>>o.n;
			temp=o.n;
			while(temp>0){
				r=temp%10;
				sum=sum+(r*r*r);
				temp=temp/10;
			}
			if(sum==o.n){
				cout<<"Yes your Number is a Armstrong Number : "<<endl;
			}
			else{
				cout<<"Sorry ! your Number is not Armstrong Number : "<<endl;
			}
		}
		void fib(){
				int s,i,f=0,c=1;
			fun o;
			cout<<"How far do you want fibonacci serivers Enter Number : "<<endl;
			cin>>o.n;
			cout<<"printed Your fibonacci serivers : "<<endl;
			for(i=0;i<o.n;i++){
				cout<<f<<" ";
				s=f+c;
				c=f;
				f=s;
			}
		}
};
int main(){
	str<int> obj;
//	obj.function();
  obj.fib();
	return 0;
}
