#include<iostream>
using namespace std;
template <class T>
struct str{
	T n,j=0,k=1,s;
};
class finbonacci{
	struct str<int> o;
	public:
		void fin(){
			cout<<"Enter the n number you are found the finbonacci series : "<<endl;
        	cin>>o.n;
        	cout<<" 0 to "<<o.n<<"  finbonacci series : "<<endl;
        	for(int i=0;i<o.n;i++){
        		cout<<o.j<<endl;
        		o.s=o.j+o.k;
        		o.j=o.k;
        		o.k=o.s;
			}
		}
		~finbonacci(){
			cout<<"-----------THANKS END PROGRAM------------"<<endl;
		}
	
};
int main(){
	finbonacci obj;
	obj.fin();
	return 0;
}
