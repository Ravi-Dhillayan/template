#include<iostream>
using namespace std;
class A{
	public: 
	template <class T> T add(T &a,T &b){
	T x,y,c,n;
	
	x=a;
	y=b;
//	c=x+y;
	n=x*y;
	return n;
//	return c;
}
};
int main(){
	A o;
//	int i,j;
//	cout<<"Enter the two number : "<<endl;
//	cin>>i;
//	cin>>j;
//	cout<<" two number add = "<<add(i,j);
	float r,s;
	cout<<"Enter the two number : "<<endl;
	cin>>r;
	cin>>s;
	cout<<"two number multiply  : = "<<endl<<o.add(r,s);
}
