#include<iostream>
#include<string.h>
#include<utility>
#include<map>

using namespace std;
struct cmp_str 
{
   bool operator()(char const *a, char const *b) 
   {
      return strcmp(a, b) < 0;
   }
};

int main()
 {
 map<char*, int,cmp_str > Employees;
 
 Employees["A"]=233;
 Employees["C"]=332;
 Employees.insert(std::make_pair((char *)"B",534));
  map<char *, int,cmp_str>::iterator ii;
// Employees["Charlie"]=788;
for(ii=Employees.begin(); ii!=Employees.end(); ++ii)
   {
       cout << (*ii).first << ": " << (*ii).second << endl;
   }
return 0;
}

