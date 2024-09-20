#include<iostream>
using namespace std;
int main(){
    string movie_name;
int adult_ticket_price,child_ticket_price,num_of_adult_ticket,num_of_child_ticket,charity_percentage
,percentage;
cout<<"Enter the movie name:" ;
cin>>movie_name;
cout<<"Enter the adult ticket price:$" ;
cin>>adult_ticket_price;
cout<<"Enter the child ticket price:$" ;
cin>>child_ticket_price;
cout<<"Enter the number of adult ticket sold:$" ;
cin>>num_of_adult_ticket;
cout<<"Enter the number of child ticket sold:$" ;
cin>>num_of_child_ticket;
cout<<"Enter the percentage of the amount to be donated to charity:";
cin>>percentage;

int total,percentage1;
     total=((adult_ticket_price*num_of_adult_ticket)+(child_ticket_price*num_of_child_ticket));
      percentage1=((adult_ticket_price*num_of_adult_ticket)+(child_ticket_price*num_of_child_ticket))/percentage;
cout<<"Movie Name: "<<movie_name<<endl;
cout<<"Total amount generated from ticket sales: $"<<total<<endl;
cout<<"Donation to charity (10%) : $"<<percentage1<<endl;
cout<<"Remaining amount after donation: $"<<total-percentage1;

}