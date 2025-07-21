// Name - Advika Bhosle 
// PRN - 24070123007
// Batch - EnTC - A1 

#include<iostream>
using namespace std;

int main(){

 int a = 12;
 int bit_to_be_set;
 int set;
cout<<"Input the Bit position u want to set: ";
cin>>bit_to_be_set;
 set=a|(1<<bit_to_be_set);
 cout<<"The set bit= "<<set<<endl;


 int bit_to_be_reset;
 cout<<"Input the Bit position u want to reset: ";
 cin>>bit_to_be_reset;
 int reset= a&~(1<<bit_to_be_reset);
 cout<<"The reset bit= "<<reset<<endl;
}
