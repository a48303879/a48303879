題目2. 英哩轉公里
``` 
#include <iostream>
#include<iomanip>
using namespace std;
int main(int argc, char** argv) {
	int a;
	cin>>a;
	cout<<fixed<<setprecision(1)<<a*1.6<<endl;
	return 0;
}	
``` 
解法:輸入英哩，程式自動x1.6並以一位浮點數輸出。

題目3. 判斷座標是否在圓形的範圍內
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
解法:輸入座標，利用畢氏定理求出到圓心的距離，判斷是否在直徑200的圈裏面。

題目4. 停車費計算
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
解法；將小時化成分鐘，用if來判斷是否進到下一個層次，並算出停車費。

題目5. 十進制轉二進制
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
解法:將輸入的數字判斷正負數，以相應的方式求出二進制。

題目6. 季節判定
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
解法:輸入月份，除以3來判斷季節，若商為1則輸出Spring、2則輸出Summer、3則輸出Autumn、0或4則輸出Winter。
