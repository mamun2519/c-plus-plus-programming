using namespace std;
int main()
{
      int array[] = {1,
                     2,
                     3};
      int size = sizeof(array) / sizeof(array[0]);
      for (int i = 0; i < size; i++)
      {
            cout << array[i] << endl
      }
}
