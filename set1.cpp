#include<algorithm>
#include<iostream>
#include<utility>
#include<string.h>
#include<set>
#include<iterator>
using namespace std;

struct lst
{
bool operator()(const char* s1, const char* s2) const
  {
    return strcmp(s1, s2) < 0;
  }
};

int main()
 {
 const int N=6;
 const char* a[N]= {"x","y","z","a","b","c"};
 const char* b[N]= {"a","b","c","d","e","f"};
 set<const char* , lst> A(a,a+N);
 set<const char* , lst> B(b,b+N);
 set<const char* , lst> C;

cout<<a<<"    "<<a+N<<endl;
cout<< "Set A: ";
  copy(A.begin(), A.end(), ostream_iterator<const char*>(cout, " "));
  cout<< endl;
  cout<< "Set B: ";
  copy(B.begin(), B.end(), ostream_iterator<const char*>(cout, " "));   
  cout << endl;

  cout << "Union: ";
  set_union(A.begin(), A.end(), B.begin(), B.end(),
            ostream_iterator<const char*>(cout, " "),
            lst());   
  cout << endl;

  cout<< "Intersection: ";
  set_intersection(A.begin(), A.end(), B.begin(), B.end(),
                   ostream_iterator<const char*>(cout, " "),
                   lst());    
  cout<< endl;

  set_difference(A.begin(), A.end(), B.begin(), B.end(),
                 inserter(C, C.begin()),
                 lst());
  cout << "Set C (difference of A and B): ";
  copy(C.begin(), C.end(), ostream_iterator<const char*>(cout, " "));
  cout<< endl;
return 0;
}

