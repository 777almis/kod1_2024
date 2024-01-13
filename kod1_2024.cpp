#include <iostream>
using namespace std;
int main(){
	int x=0;
	int toplam=0;
	while(x<=15){
		toplam = toplam + x ; // 0+0=0 toplam=0 0+1=1 toplam=1 1+2=3 toplam=3 3+3=6 toplam=6 6+4=10 toplam=10
		x++;//0->1->2->3->4->5
		cout<<"Toplam degeriniz:"<<toplam<<endl;//0->1->3->6->10
		
	}
	
}
