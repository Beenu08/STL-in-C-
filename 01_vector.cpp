// vector is basically dynamic array whose size can be change at run time
// As in array we can not alter it but in vector we can
//  we have  to include header file as #include<vector>
//  syntax to declare vector as "vector<int> v(size);" size is optional
// we can insert elemnt as v[i]=i+1; size must be given
// another way is v.push_back(i+1); size is optional

// Execution
#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int> v(10);
    for (int i = 0; i < 12; i++)
    {
         v[i] = i + 1;
    }
    for (int i = 0; i < 12; i++)
    {
        cout << v[i] << " ";
    }
}