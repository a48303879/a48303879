#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int x;
	cin>>x;
	switch(x/3)
	{
		case 1:cout<<"Spring"<<endl;
		break;
		case 2:cout<<"Summer"<<endl;
		break;
		case 3:cout<<"Autumn"<<endl;
		break;
		default:cout<<"Winter"<<endl;
		break;
	} 
	return 0;
}

