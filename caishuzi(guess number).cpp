#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int b = rand() % 100 + 1;
    int n=0;
    int a = 1;
    int maxa = 10;
    cout << "1~100" << maxa << "10 ji hui" << endl;
    for(a;a<=10;a++){
	   cin>>n;
	   if(n>b){
	   	cout<<"cuo le  da le No > hai sheng"<<10-a<<"ci ji hui "<<endl;
	   }else if(n==b){
	   	cout<<"cai dui le Yes";
	   }else if(n<b){
	   	cout<<"cai cuo le xiao le No <  hai sheng"<<10-a<<" ci ji hui"<<endl;
	   }
	   if(a==10){
	   		cout<<endl<<"shu le you lost"
	   	}
	}  
    return 0;
}
