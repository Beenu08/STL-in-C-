#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    for(int i=0;i<10;i++){
        v.push_back(i+1);
    }
    for(int i=0;i<10;i++){
        cout<<v[i]<<endl;
    }
    return 0;
}