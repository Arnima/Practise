#include<iostream>
#include<list>
using namespace std;

 main()
{

list<int> L;
L.push_back(0);
L.push_front(1);
L.push_back(2);
L.push_front(3);
L.push_front(4);
list<int>::iterator i;
for(i=L.begin();i!=L.end();++i)
 {
 cout<<*i<<endl;
 }

return 0;
 }

