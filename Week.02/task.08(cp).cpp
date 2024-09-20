#include<iostream>
using namespace std;
int main(){

float vegetable_price_per_kilogram,fruit_price_per_kilogram,total_kilograms_of_vegetables,total_kilograms_of_fruits,rupee;
cout<<"Enter vegetable price per kilogram (in coins):";
cin>>vegetable_price_per_kilogram;
cout<<"Enter fruit price per kilogram (in coins):";
cin>>fruit_price_per_kilogram;
cout<<"Enter total kilograms of vegetables:";
cin>>total_kilograms_of_vegetables;
cout<<"Enter total kilograms of fruits:";
cin>>total_kilograms_of_fruits;
cout<<"Total earning in Rupees (Rps): " <<((vegetable_price_per_kilogram*total_kilograms_of_vegetables)+(fruit_price_per_kilogram*total_kilograms_of_fruits))/1.94;







}