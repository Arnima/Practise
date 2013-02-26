#include <iostream>
#include <vector>

using namespace std;

main()
{
   vector< vector<int> > vI2Matrix;    // Declare two dimensional array
   vector<int> A, B, C;
   vector< vector<int> >::iterator iter_ii;
   vector<int>::iterator                 iter_jj;

   A.push_back(10);
   A.push_back(20);
   A.push_back(30);
   B.push_back(100);
   B.push_back(200);
   B.push_back(300);
   C.push_back(1);
   C.push_back(2);
   C.push_back(3);
   vI2Matrix.push_back(A);
   vI2Matrix.push_back(B);
   vI2Matrix.push_back(C);

   cout << endl << "Using Iterator:" << endl;

   for(iter_ii=vI2Matrix.begin(); iter_ii!=vI2Matrix.end(); iter_ii++)
   {
      for(iter_jj=(*iter_ii).begin(); iter_jj!=(*iter_ii).end(); iter_jj++)
      {
         cout << *iter_jj << "  ";
      }
    cout<<endl;
   }
}
                

