#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x,y;
	cin>>x>>y;
	if(x*x+y*y<10000)
	cout<<"inside"<<endl;
	else
	cout<<"outside"<<endl;
	return 0;
}
