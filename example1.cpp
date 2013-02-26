#include<iostream>

using namespace std;

int get_five(){return 5;}

int main()
{

int val1[get_five()+7];

int sum =get_five()+10;

cout<<"Sum is"<<sum<<endl;

for(int i =0 ;i<sum;i++)
{

cout<<i<<endl;
}
return 0;
}

