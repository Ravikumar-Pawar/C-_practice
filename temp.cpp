#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

using namespace std;
int main()
{
	char a[10];
	cout<<"enter one string\n";
	cin>>a;
	int p=strlen(a);
	cout<<"lenth:"<<p<<"\n";
	
	for (int i=0;i<p/2;i++)
	{
		while (a[i]!=a[p-i-1])
		{
 		cout<<"Not palindrome\n";
   		return false;
	 	}
	 	cout<<"out of while loop\n";
	}
	
	cout<<"palindrome\n";
	return 0;
	
	
}
