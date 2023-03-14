#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
    int n=0,i;  
    int a[8];  
    cin>>n;  
    if(n<0)   
        n+=256;  
    for(i=7;i>=0;i--)  
	{  
        a[i]=n%2;  
        n/=2;  
    }  
    for(i=0;i<8;i++)  
        cout<<a[i];  
	cout<<endl; 
	return 0;
}
