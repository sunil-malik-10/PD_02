#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the 4-digit number:";
cin>>n;
int sum=0;
sum+=n%10;
n/=10;
sum+=n%10;
n/=10;
sum+=n%10;
n/=10;
sum+=n;
cout<<"sum of the individual digits:"<<sum;


}