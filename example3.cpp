#include<iostream>

using namespace std;

 template <class A>
A Prod(A ob1, A ob2)
{
return ob1*ob2;
}

int main()
{

 int a=10,b=18,c;

 c=Prod<int>(a,b);
 cout<<c;
 return 0;
}



