#include<iostream>
#include<boost/function.hpp>
#include<boost/bind.hpp>
#include<boost/ref.hpp>
using namespace std;

using namespace boost; 

int f(int a, int b)
{

return a+b;

}

int g(int a, int b, int c)
 {

return a+b+c;

}
struct F
{
    int operator()(int a, int b) { return a - b; }
    bool operator()(long a, long b) { return a == b; }
};

int main()
 {
int x=5,y=6,i=4;
cout<<bind(f,_2,_1)(x,y)<<endl;
cout<<bind(g,_1,9,_1)(x)<<endl;

cout<<bind(f,ref(i), _1)(x)<<endl;
cout<<bind(f, cref(42), _1)(x)<<endl;
 
F f;
cout<<bind<int>(f, _1,_2)(x,y)<<endl;
cout<<bind<bool>(f,_1,_1)(x)<<endl;
cout<<bind<bool>(f,_1,_2)(x,y)<<endl;

//bind1st(ptr_fun(f), 5)(x);
return 0;
}

