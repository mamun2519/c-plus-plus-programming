# c++ programming all concept note

## What is C++?

- C++ is a cross-platform language that can be used to create high-performance applications.
- C++ was developed by Bjarne Stroustrup, as an extension to the C language.
- MongooseC++ gives programmers a high level of control over system resources and memory.
- The language was updated 4 major times in 2011, 2014, 2017, and 2020 to C++11, C++14, C++17, C++20.

## Why Use C++

- C++ is versatile in nature and is a highly adaptable language. Due to high adaptability, it is still useful when it comes to software and developing games. It is widely used for so long that it is compatible with many languages and is in demand in many sectors.F

## Difference between C and C++

- C++ was developed as an extension of C, and both languages have almost the same syntax.
- The main difference between C and C++ is that C++ support classes and objects, while C does not.

## c++ Variables

In C++, there are different types of variables (defined with different keywords), for example:

- int - stores integers (whole numbers), without decimals, such as 123 or -123
- double - stores floating point numbers, with decimals, such as 19.99 or -19.99
- char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
- string - stores text, such as "Hello World". String values are surrounded by double quotes
- bool - stores values with two states: true or false

## C++ Data Types

- boolean
- char
- int
- float
- double

## C++ Operators

c++ Provide 4 types operator

- Arithmetic
- Assignment
- Comparison
- Logical

## C++ Conditions and If Statements

- if
- else
- else if
- switch

## C++ Loops

c++ Provide 3 types loop

- For
- do/while
- while

## c++ Function (Concept)

- Function
- Function Parameter
- Function Argument
- Function Overloading
- Recursion

## C++ OOP

## C++ What is OOP?

OOP stands for Object-Oriented Programming.
Object-oriented programming has several advantages over procedural programming:

- OOP is faster and easier to execute
- OOP provides a clear structure for the programs
- OOP helps to keep the C++ code DRY "Don't Repeat Yourself", and makes the code easier to maintain, modify and debug
- OOP makes it possible to create full reusable applications with less code and shorter development time

## Array

Array Is Two Types

- Single Dimensional or one dimensional array
- Multidimensional Array

## Accession Element in Dimensional Array

- 0- Based Indexing

```jsx
array[index];
```

## Array Operation

- sizeof (Check Size)
- Array Traves

```jsx
using namespace std;
int main()
{
 int array[] = {1, 2,3};
      int size = sizeof(array)/sizeof(array[0]);
      for(int i = 0; i<size;i++){
            cout<<array[i]<<endl
      }
}

```

## Vectors In C++

- Dynamic Array => &size when input / delete element
- contours memory allocation

## Basic Operations In Vectors

- Add Element

```jsx
Vectors.ush_back(element);
```

- Insert element

```jsx
Vectors.inset(position, element);
```

- Delete Element

```jsx
Vectors.pop - back();
```

-- Middle Element Remove

```jsx
Vectors.esase(position);
```

-- All Element Delete

```jsx
Vectors.clear();
```

## All Example

```jsx
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
```

## Looping In Vector

```jsx
#include <iostream>
#include <vector>
using namespace std;
int main()
{
      vector<int> v;
      for (int i = 0; i < 5; i++)
      {
            int element;
            cin >> element;
            v.push_back(element);
      }
      return 0;
}
```

## Vector Related Problem Solving

- 1. Find The Last occurrence of an element x in a given array

```jsx
#include <iostream>
#include <vector>
using namespace std;
int main()
{
      vector<int> v(6);
      for (int i = 0; i < 6; i++)
      {
            cin >> v[i];
      }
      cout << "Enter X:";
      int x;
      cin >> x;
      int occurence = -1;
      for (int i = 0; i < v.size(); i++)
      {
            if (v[i] == x)
            {
                  occurence = i;
            }
      }
      cout << occurence << endl;
}
```

- Count The Number of Element Strictly Greater Then Value X

```jsx
#include <iostream>
#include <vector>
using namespace std;
int main()
{
      vector<int> v(6);
      for (int i = 0; i < v.size(); i++)
      {
            cin >> v[i];
      }
      cout << "Enter X:";
      int x;
      cin >> x;
      int count = 0;
      for (int i = 0; i < v.size(); i++)
      {
            if (v[i] > x)
            {
                  count++;
            }
      }
      cout << count;
}
```

- Check If The Given Array Is Sorted Or Not

```jsx
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
```

## Prefix Sums : Array Patten

- Giver An integers array 'a" retune the prefix sum/renning sum in the same array without creating a new array

```jsx
#include <iostream>
#include <vector>
using namespace std;
void runingSum(vector<int> &v)
{
      for (int i = 1; i < v.size(); i++)
      {
            v[i] += v[i - 1];
      }
}
int main()
{
      int n;
      cin >> n;
      vector<int> v;
      for (int i = 0; i < n; i++)
      {
            int ele;
            cin >> ele;
            v.push_back(ele);
      }
      runingSum(v);
      for (int i = 0; i < n; i++)
      {
            cout << v[i] << " ";
      }
      cout << endl;
}
```

## Basic Array related problem

- Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge The two Arrays into a single sorted array of size m+ n
- example

```jsx
input: (arr1 = [1, 2, 3]), (arr2 = [4, 5, 6]);
outPut: arr = [1, 2, 3, 4, 5, 6];
```

- Solution this problem

## 2D array of c++

- 2d array representation table
- first index row and 2nd index column
