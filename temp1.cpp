#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	vector<int>v1;vector<int>v2;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		v1.push_back(a);
		v2.push_back(i*100);
		//cout<<v[i];
	}
	
vector<int>::iterator p;
p=v1.begin();
for(p=v1.begin();p!=v1.end();p++)
{
	cout<<*p;
}
for(int i=0;i<v2.size();i++)
{
	cout<<v2[i];
	if(v2[i]==*p)
	{
		cout<<"YES\n";
	}
	p++;
}


}




