#include <iostream>
#include <vector>
using namespace std;
int main()
{
      vector<int> v;
      cout << "Size" << v.size() << endl;
      cout << "Capacity" << v.capacity() << endl;
      v.push_back(1);
      cout << "Size" << v.size() << endl;
      cout << "Capacity" << v.capacity() << endl;
      v.pop_back();
      v.resize(6);
      return 0;
}