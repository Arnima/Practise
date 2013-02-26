#include<iostream>
#include<list>

int main()
{

std::list<int>,L;
L.push_back(0);
L.push_front(1);
//L.insert(++L.begin(), 2);

int i;
std::list<int>::iterator i;
for(i=L.begin;i!=L.end();i++)
 {
 std::cout<<*i<<std::endl;
 }

return 0;
 }


