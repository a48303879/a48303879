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
``` 
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
``` 
解法:輸入座標，利用畢氏定理求出到圓心的距離，判斷是否在直徑200的圈裏面。

題目4. 停車費計算
``` 
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
``` 
解法；將小時化成分鐘，用if來判斷是否進到下一個層次，並算出停車費。

題目5. 十進制轉二進制
``` 
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
``` 
解法:將輸入的數字判斷正負數，以相應的方式求出二進制。

題目6. 季節判定
``` 
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
``` 
解法:輸入月份，除以3來判斷季節，若商為1則輸出Spring、2則輸出Summer、3則輸出Autumn、0或4則輸出Winter。

題目7. 複數運算
``` 
#include <iostream>
using namespace std;

int main() {
    int num, real[2], img[2];
    cin >> num;
    for (int i = 0; i < num; i++) {
        char symbol;
        cin >> symbol >> real[0] >> img[0] >> real[1] >> img[1];
        switch (symbol) {
            case '+':
                cout << real[0] + real[1] << " " << img[0] + img[1] << endl;
                break;
            case '-':
                cout << real[0] - real[1] << " " << img[0] - img[1] << endl;
                break;
            case '*':
                cout << real[0] * real[1] - img[0] * img[1] << " " << img[0] * real[1] + real[0] * img[1] << endl;
                break;
            case '/':
                cout << (real[0] * real[1] + img[0] * img[1]) / (real[1] * real[1] + img[1] * img[1]) << " " << img[0] * real[1] - real[0] * img[1] / (real[1] * real[1] + img[1] * img[1]) << endl;
                break;
            default:
                break;
        }
    }
    return 0;
}
``` 
解法:依據輸入的行數遞減計算次數， 依據運算符號來決定計算方式，最後輸出計算公式的答案 。

題目8. 質數判別
``` 
#include <iostream>  
using namespace std;

int main()
{
    int n, a, ans;
    cin >> n;
    ans = 1;
    a = 2;
    while (a < n)
    {
        if (n % a == 0)
        {
            ans = 0;
        }
        a++;
    }
    if (ans == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
``` 
解法:往下尋找能整除的數，輸出YES NO
題目9. 計算正整數被3整除之數值之總和
``` 
#include <iostream>
using namespace std;
int main()
{
	int n;
	int sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0)sum += i;
	}
	cout << sum << endl;
	return 0;
}
``` 
解法:找出能被3直整除的數，然後計算總合。
題目10. 輾轉相除法
``` 
#include <iostream>
using namespace std;
int gcd(int x, int y) {
    int num = 1;
    while (num != 0) {
        num = x % y;
        x = y;
        y = num;
    }
    return x;
}
int main() {
    int x, y;
    cin >> x;
    cin >> y;
    cout << gcd(x, y) << endl;
    return 0;
}
#include<iostream>
using namespace std;

int euc(int a,int b);
int main()
{
	int input=0,input2=0,c=0;
	
	cin>>input>>input2;
	if(input<input2)
	{
		c=input;
		input=input2;
		input2=c;
	}
	cout<<euc(input,input2)<<endl;
	return 0;
}
int euc(int a,int b)
{
	int f=a%b;
	if(f==0) return b;
	else return euc(b,f);
}
``` 
解法:給兩個整數，輸出最大公因數。
題目11. 矩陣反轉
``` 
#include <iostream>
using namespace std;

int main() {
    int row, column;
    cin >> column >> row;
    int data[10][10];
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            cin >> data[i][j];
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << data[j][i] << " ";
        }
        cout << "\b" << endl;
    }
    return 0;
}
``` 
解法:
題目12. 遞迴程式練習
``` 
#include <iostream>
using namespace std;

int funtion(int num) {
	if ((num == 0) || (num == 1))
		return num + 1;
	else
		return funtion(num - 1) + funtion(num / 2);
}
int main() {
	int num;
	cin >> num;
	cout << funtion(num) << endl;
	return 0;
}
``` 
解法:
題目13. 撲克牌大小
``` 
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;

void sortPoke (vector<string>& a,int n);
int main()
{
	int input=0,n=0;
	string Str,s;
	vector<string> pokeS;

	cin>>input;
	cin.ignore(1,'\n');
	for(int i=0;i<input;i++)
	{
		getline(cin,Str);
		istringstream cutStr(Str);
		while(getline(cutStr,s,' '))
		{
			pokeS.push_back(s);
		}
		sortPoke(pokeS,pokeS.size());
		for(int j=0;j<pokeS.size();j++)
		{
			if(j==pokeS.size()-1) cout<<pokeS[j]<<endl;
			else cout<<pokeS[j]<<" ";
		}
		pokeS.clear();
	}
	return 0;
}
void sortPoke (vector<string>& a,int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			string t;
			if(a[i][0]>a[j][0]){t=a[i];a[i]=a[j];a[j]=t;}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0+i;j<n;j++)
		{
			if(a[i][0]==a[j][0])
            {
                string t,bN=a[i].substr(1,2),sN=a[j].substr(1,2);
                istringstream bigN(bN);
                istringstream smaN(sN);
                int b=0,s=0;
                bigN>>b;smaN>>s;
                if(b<s){t=a[i];a[i]=a[j];a[j]=t;}
            }
		}
	}
}
``` 
解法:
題目14. 判斷是否為迴文
``` 
#include <iostream>
using namespace std;

int main() {
	string input;
	int len;
	cin >> input;
	len = input.length();
	for (int i = 0; i < len / 2; i++) {
		if (input[i] != input[len -1 - i]) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
``` 
解法:
