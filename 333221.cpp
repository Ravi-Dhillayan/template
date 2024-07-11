#include<iostream>
using namespace std;
class pattren{
	public:
	template <class T>
	


		void get(){
				T i,j=0,n,s,k=1;
			cout<<"How many Enter the n number of print fibbnocssice serices : "<<endl;
			cin>>n;
			cout<<"printed fibbnocssice serices : "<<endl;
			for(i=0;i<n;i++){
				cout<<j<<endl;
				s=j+k;
				j=k;
				k=s;
			}
		}
		
	
};
int main(){
	pattren obj;
obj.get<int>();
	return 0;
}
