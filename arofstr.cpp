#include<iostream>
using namespace std;
class col{
		public:
	template <class T,class S>
			void get(){
			T *p;
			 S coll, i;
			cout<<"Enter the size of color : "<<endl;
			cin>>coll;
			p=new T[coll];
			cout<<"Enter  colors Name : "<<endl;
			for(i=0;i<coll;i++){
				cin>>p[i];
			}
			cout<<"your all colors printed : "<<endl;
			for(i=0;i<coll;i++){
				cout<<p[i]<<endl;
			}
			delete[] p;
			
			
		}
		void re(){
			
			 int s;
			cout<<"Enter the color size of name : "<<endl;
			cin>>s;
        string as[s];

        cout << "Enter " << s<< " color names:" << endl;
        for (int i = 0; i < s;i++) {
            cin >> as[i];
        }

        cout << "You entered the following color names:" << endl;
        for (int i = 0; i < s;i++) {
            cout << as[i] << endl;
			
		}
	}
	
};
int main(){
	col co;
	co.get<string,int>();
co.re();
	return 0;
}
