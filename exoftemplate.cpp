#include<iostream>
using namespace std;
class str{
	
	public:
		template <class Ravi> 
	
		
		void Enter(){
				Ravi a,b;
			cout<<"Enter the two number  : "<<endl;
			cin>>a>>b;
			int sum=a+b;
			cout<<"Sum of two number : "<<sum<<endl;
		}
};
int main(){
	str obj;
	obj.Enter<int>();
	return 0;
}
