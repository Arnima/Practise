#include<iostream>
#include<boost/function.hpp>
 using namespace std;
//boost::function<float (int x, int y)> f;
boost::function<void (int values[], int n , int& sum float& avg)> sum_avg;
/*struct int_div
{
 float operator()(int x, int y)const{ return ((float)x)/y;};
};*/

float do_sum_avg(int values[], int n, int& sum, float& avg)
 {
  sum=0;
  for( int i=0;i<n;i++)
   sum +=values[i];
   avg = (float)sum/n;
  // return avg;
 }
int main()
{
//f=int_div();

//cout<<f(6,3)<<endl;
int n=6;
int values[n]={2,3,4,5,6,7};

sum_avg=&do_sum_avg;
//cout<<sum_avg(values,n);
return 0;
}
