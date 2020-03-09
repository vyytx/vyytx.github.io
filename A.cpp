//C++
#include<iostream>
using namespace std;
int s=0;
void move(char m,char n)
{
	cout<<m<<" → "<<n<<endl;
	s++;
}
void hanoi(int n,char a,char b,char c)
{ 
	if(n==1)
	{ 
		move(a,c);
	}
	else
	{
		hanoi(n-1,a,c,b);//藉助c將n-1個盤子從a移動到b 
		move(a,c);
		hanoi(n-1,b,a,c);//藉助a將n-1個盤子從b移動到c 
	}
}
int main()
{
	int n;
	cout<<"請輸入盤子數：";
	cin>>n;
	cout<<"移動"<<n<<"個盤子的過程："<<endl;
	hanoi(n,'A','B','C') ;
	cout<<"總共移動了"<<s<<"次"; 
	return 0;
 } 
