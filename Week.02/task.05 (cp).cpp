#include<iostream>
using namespace std;
int main(){
string name;
int weight_in_kilogram;
cout<<"Enter the name of the person :";
cin>>name;
cout<<"Enter the target weight loss in kilogram:";
cin>>weight_in_kilogram;
int days=weight_in_kilogram*15;
cout<<name<<" will need "<< days<<" days to lose "<<weight_in_kilogram<<" by following doctor suggestion";
return 0;
}
