///week04-2good.cpp 這程式是錯的,用進階c++迴圈
///但在 CodeBlocks出錯,waring: range-base for only available with......
///2011年之後,只有在 -std=c++11或-=gnu++11才能用
///所以,需要改一下設定
///選第二個使用C++ ISO 國際標準的C++也就是-std=c++11
///下面是wweek04的小考題目 SOIT106_ADVACEN_012
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int>a;
	int now;
	for(int i=0;i<20;i++){
		cin>>now;
		if(now==0)break;
		a.push_back(now);
	}
	cin>>now;
	int ans=0;
	for(int num:a){
		if(num==now)ans++;
	}
	cout<<ans<<"\n";
}
