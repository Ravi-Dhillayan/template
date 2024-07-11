#include<iostream>
using namespace std;
template <class T>
class ta{
	T **a;
	T i,j,n;
	public:
		void ar(){
			cout<<"Enter the number you printed 2D array : "<<endl;
			cin>>n;
			a=new T*[n];
			for(i=0;i<n;i++){
				a[i]=new T[n];
			}
			cout<<"Enter the numbers : "<<endl;
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					cin>>a[i][j];
				}
				cout<<endl;
			}
			cout<<"printed Array "<<endl;
				for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					cout<<a[i][j];
				}
				cout<<endl;
			}
			
		}
};
int main(){
	ta <int> obj;
	obj.ar();
}
