//uniform initialization

#include<iostream>
using namespace std;
struct B{
 int x;
 double y;
 };

struct A{
 A(int x, double y):x_{x},y_{y} {}
  void display(){
 cout<<x_<<" "<<y_<<endl;}
 private:
   int x_;
   double y_;
 

  };

auto p = [](int x, int y){return x+y;};


int main()
 {
int my_array[5] = {1, 2, 3, 4, 5};
// double the value of each element in my_array:
for (int &x : my_array) {
    x *= 2;
cout<<x<<endl;
} 
A var1{5,3.4};
B var2{2,4.3};
//cout<<var1.x<<"  "<<var1.y<<endl;
cout<<var2.x<<"  "<<var2.y<<endl;
var1.display();

cout<<p(2,3)<<endl;
return 0;
}

