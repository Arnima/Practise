#include<iostream>
#include<list>
using namespace std;
class AAA
{ 
 
 friend ostream &operator<<(ostream &, const AAA &);
 
 public:
   int x;
   int y;
   float z;
 
   AAA();
   AAA(const AAA &);
  ~AAA(){};
   AAA &operator=(const AAA &rhs);
   int operator==(const AAA &rhs) const;
   int operator<(const AAA &rhs) const;
   
};

AAA::AAA()
{
x=0;y=0;z=0;
}
AAA::AAA(const AAA &copyin)
 {
   x=copyin.x;
   y=copyin.y;
   z=copyin.z;
 }
 ostream &operator<<(ostream &output, AAA &aaa)
  {
   output<<aaa.x<<"  "<<aaa.y<<"  "<<aaa.z<<endl;
   return output;
   }

AAA& AAA::operator=(const AAA &rhs)
 {
 this->x = rhs.x;
 this->y=rhs.y;
 this->z=rhs.z;
 return *this;
 }

int AAA::operator==(const AAA &rhs) const
 {
if( this->x!=rhs.x) return 0;
if(this->y!=rhs.y) return 0;
if(this->z!=rhs.z) return 0;
return 1;
}


int AAA:: operator<(const AAA &rhs) const
 {
 if( this->x == rhs.x && this->y==rhs.y && this->z<rhs.z) return 1;
 if(this->x ==rhs.x && this->y<rhs.y) return 1;
 if( this->x < rhs.x) return 1;
 return 0;
}

int main()
 {
 list<AAA> L;
 AAA Ablob;
 
 Ablob.x=7;
 Ablob.y=2;
 Ablob.z=4.233;
 L.push_back(Ablob);

 Ablob.x=5;
 Ablob.y=1;
 L.push_back(Ablob);

 Ablob.x=3;
 Ablob.y=7;
 Ablob.z=8.1;
L.push_back(Ablob);

list<AAA>::iterator i;

for(i=L.begin();i!=L.end(); i++)
 {
 cout<<(*i).x<<" ";
 }
 cout<<"\n \n";

for(i=L.begin(); i!=L.end(); i++)
{ cout<<*i<<"  ";
}

cout<<"\n\n";

L.sort();

for(i=L.begin();i!=L.end(); i++)
{
cout<<*i<<" ";
}
return 0;

}

