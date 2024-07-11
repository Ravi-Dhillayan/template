#include<iostream>
using namespace std;
class Ar{
	public:
   template <class T>
    void add(){
    	 T** a;
		 T n,i,j;    
	 
	     cout<<"Enter the size of the array : "<<endl;
	     cin>>n;
	     a=new T*[n];
	     for(i=0;i<n;i++){
	     	a[i]=new T[n];
		 }
	     cout<<"Enter the array Element : "<<endl;
	     for(i=0;i<n;i++){
	     	for(j=0;j<n;j++){
	     		cin>>a[i][j];
			 }
			 cout<<endl;
		 }
		 cout<<"Array Element print : "<<endl;
		  for(i=0;i<n;i++){
	     	for(j=0;j<n;j++){
	     		cout<<a[i][j]<<" ";
			 }
			 cout<<endl;
		 }
	}
   
};
int main(){
	Ar obj;
	obj.add<int>();
	return 0;
}
