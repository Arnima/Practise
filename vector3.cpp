#include<iostream>
#include<vector>

using namespace std;

int main()
{

vector<int> V1(2,0);

vector< vector <int> > V2(3,V1);
vector< vector <vector <int> > > V3(2,V2); 
 int i,j,k;
 
for( i=0; i<2; i++)
 {
for( j=0;j<3;j++)
 {
  for (k=0; k<2;k++)
  { 
cout<<V3[i][j][k]<<" ";
}
cout<<endl;
}
}
return 0;
}

