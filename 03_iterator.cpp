//iterator is used as pointer which is used to point arrays elements in range of vectors
// it goes upto size as when it found null it terminates
// to get value through iterator we have to dereference it
//iterator is used in stl i.e., vector, string, map, hash,etc
// synatax to declare iterator as vector<int>::iterator it;
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int> :: iterator it;
    for(int i=0;i<10;i++){
        v.push_back(i+1);
    }
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
}