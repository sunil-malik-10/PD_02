#include<iostream>
using namespace std;
main(){
int initial_velocity,acceleration,time;
cout<<"Enter the initial velocity(m/s):";
cin>>initial_velocity;
cout<<"Enter the acceleration(m/s^2):";
cin>>acceleration;
cout<<"Enter the time(s):";
cin>>time;

cout<<"final_velocity(m/s):"<<(time*acceleration)+initial_velocity;
}