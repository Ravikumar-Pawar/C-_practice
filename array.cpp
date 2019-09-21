#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

   int n;
   int arr[10000];
   cin>>n;
    int arr1[10000];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   
   for(int i=0;i<n;i++)
   {
       arr1[i]=arr[n-i-1];
   }
    for(int i=0;i<n;i++)
   {
       cout<<arr1[i]<<" ";
   }
   
    return 0;
}
