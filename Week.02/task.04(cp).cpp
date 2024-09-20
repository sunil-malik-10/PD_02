#include<iostream>
using namespace std;
main(){
float imposter_count,player_count;
cout<<"Enter the imposter count:";
cin>>imposter_count;
cout<<"Enter the player count:";
cin>>player_count;
cout<<"Chance of being an imposter:"<< 100*(imposter_count/player_count)<<"%";
}