// Name - Advika Bhosle 
// PRN - 24070123007
// Batch - EnTC - A1 

#include<iostream>
using namespace std;

int main()
{
    int a=4;  
    int b=5;  

int bitwise_and=a&b;
int bitwise_or=a|b;
int bitwise_xor_=a^b;
int bitwise_not_a=~a;
int bitwise_leftshift_=a<<3;
int bitwise_rightshift_=a>>3;

cout<<"bitwise AND "<<bitwise_and<<endl;
cout<<"bitwise OR "<<bitwise_or<<endl;
cout<<"bitwise XOR "<<bitwise_xor_<<endl;
cout<<"bitwise NOT "<<bitwise_not_a<<endl;
cout<<"bitwise LEFTSHIFT "<<bitwise_leftshift_<<endl;
cout<<"bitwise RIGHTSHIFT "<<bitwise_rightshift_<<endl;
}

//output
/*
bitwise AND 4
bitwise OR 5
bitwise XOR 1
bitwise NOT -5
bitwise LEFTSHIFT 32
bitwise RIGHTSHIFT 0

=== Code Execution Successful ===
/*
