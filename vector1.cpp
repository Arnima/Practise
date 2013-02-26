#include<iostream>
#include<vector>
#include<string>

int main()
{

std::vector<int> V;
V.insert(V.begin(),0);
V.push_back(1);
V.push_back(2);
V.push_back(3);
int i;
for(i=0;i<V.size();i++)
{
std::cout<<V[i]<<std::endl;
}
//Iterator
std::vector<int>::iterator it;
for(it=V.begin(); it!=V.end(); it++)
   {
      std::cout << *it <<std:: endl;
   }
//reverse iterator
std::vector<int>::reverse_iterator r;
for(r=V.rbegin();r!=V.rend();++r)
{
std::cout<<*r<<std::endl;

}

return 0;
}
