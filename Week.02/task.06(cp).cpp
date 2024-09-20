#include<iostream>
using namespace std;
int main(){
int fertilizer_in_pounds,cost_of_bags,area_in_square;
cout<<"Enter the size of the fertilizer bag in pounds :";
cin>>fertilizer_in_pounds;
cout<<"Enter the cost of the bag:$";
cin>>cost_of_bags;
cout<<"Enter the area in square feet that can be covered by the bag:  ";
cin>>area_in_square;
cout<<"cost of the fertilizer per pound: $"<<cost_of_bags/fertilizer_in_pounds<<endl;
cout<<"cost of fertilizing per sqaure foot: $"<<cost_of_bags/area_in_square;
}