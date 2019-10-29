// set_intersection example
#include <iostream>     // std::cout
#include <algorithm>    // std::set_intersection, std::sort
#include <vector>       // std::vector
using namespace std;
int main () {

  vector<int> v1,v2,v(10);                      // 0  0  0  0  0  0  0  0  0  0
  vector<int>::iterator it;
  int n,m,c,i,j;
  cin>>n>>m;
    for(i=0; i<n; i++)
    {
        cin>>c;
        v1.push_back(c);
    }
    for(j=0; j<m; j++)
    {
        cin>>c;
        v2.push_back(c);
    }

  sort (v1.begin(),v1.end());     //  5 10 15 20 25
  sort (v2.begin(),v2.end());   // 10 20 30 40 50

  it=set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());
                                               // 10 20 0  0  0  0  0  0  0  0
  v.resize(it-v.begin());                      // 10 20

  cout << "The intersection has " << (v.size()) << " elements:\n";
  for (it=v.begin(); it!=v.end(); ++it)
  cout << ' ' << *it;
  cout << '\n';

  return 0;
}
