#include<iostream>
using namespace std;
int main(){
int number_of_square_meters,width,height;
cout<<"Number of  square meters you can paint:";
cin>>number_of_square_meters;
cout<<"Width of  single wall(in meters):";
cin>>width;
cout<<"Height of  single wall(in meters):";
cin>>height;
cout<<"Number of walls you can paint: "<<number_of_square_meters/(width*height);


}