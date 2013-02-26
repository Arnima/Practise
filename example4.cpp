#include<iostream>

using namespace std;

struct Object {
    float first;
    int second;
 };


int main()
{
Object scalar={0.43,10};
Object anArray[]={{13.4,3},{43.28,29},{5.943,17}};
//int i;
cout<<scalar.first<<"   "<<scalar.second<<endl;
//for_each(anArray.begin(),anArray.end(),display);
//for(i=anArray;i<anArray.end();i++)

for (auto iter=begin(anArray); iter!= end(anArray); ++iter){

cout<<(*iter).first<<"     "<<(*iter).second<<endl;
}


for (auto a : anArray){
cout<<a.first<<"     "<<a.second<<endl;
}


return 0;

}
