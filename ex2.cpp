#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <iterator>
using namespace std;

int main() {
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	vector<int> V(10);

	  iota(V.begin(), V.end(), 1);
	  copy(V.begin(), V.end(), ostream_iterator<int>(cout, " "));
	  cout << endl;
	return 0;
}

