#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int starth=0,startm=0,endh=0,endm=0;
	cin>>starth>>startm; 
	cin>>endh>>endm;
	int time=(endh*60+endm)-(starth*60+startm);
	if(time<=120&&time>=0) 
	cout<<time/30*30<<endl;
	else if(time>120&&time<=240) 
	cout<<(time-120)/30*40+120<<endl;
	else 
	cout<<(time-240)/30*60+120+160<<endl;
	return 0;
}
