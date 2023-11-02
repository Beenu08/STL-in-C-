//it is used to store the frequency of different elements
//we have to includew header file as #include<map>
//syntax map<int,int>mp;
// the way to get values is as it->first or it->second

//execution
#include<iostream>
#include<map>
using namespace std;
int main(){
    int arr[]={1,2,1,4,4,2,5,1,5,5};
    map<int,int>mp;
    for(int i=0;i<10;i++){
        mp[arr[i]]++;
    }
    map<int,int>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" --> "<<it->second<<endl;
    }
}