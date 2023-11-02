// include header file as #include<set>
// it is used to find unique elements of the array

// Execution
#include <iostream>
#include <set>
using namespace std;
int main()
{
    int arr[] = {2, 4, 5, 6, 2, 3, 4, 1, 3, 7};
    set<int> s;
    for (int i = 0; i < 10; i++)
    {
        // cout<<arr[i]<<endl;
        s.insert(arr[i]);
    }

    // to print values of array
    // for(int i=0;i<10;i++){
    //     cout<<arr[i]<<" ";
    // }

    // auto is any keyword which take integer /character
    // it displays unique elements
    for (auto i : s)
    {
        cout << i << " ";
    }

    cout << endl;
    // using iterator to diplay elements
    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }

    //to find that any value is present in array is true or not
    if(s.find(4)!=s.end()){
        cout<<"Find";
    }else{
        cout<<"Not found";
    }
}
