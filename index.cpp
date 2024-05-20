#include <iostream>
using namespace std;
int main()
{
      int array[4] = {3, 5, 7, 2};
      int size = sizeof(array) / sizeof(array[0]);
      int sum = 0;
      for (int i = 0; i < size; i++)
      {
            if (array[i] > sum)
            {
                  sum = array[i];
            }
      }
      cout << sum << endl;
}