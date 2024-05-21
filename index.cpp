#include <iostream>
#include <vector>
using namespace std;
int main()
{
      int array[] = {1, 2, 3, 4, 5, 6};
      bool isSorted = true;
      for (int i = 1; i < 6; i++)
      {
            if (array[i] <= array[i - 1])
            {
                  isSorted = false;
            }
      }
      cout << isSorted;
}