//pair is used to use two different data types together
//to use pair you have to include header file named as #include<utility>
//syntax pair<int,char>p;
//p=make_pair(datatype_1, datatype_2);
//anothe way pair<int, char> p(1,'b');
//to get output just write p.first to acces first data type and use p.second to access second data type


//execution
#include<iostream>
#include<utility>
using namespace std;
int main(){
   //initialization at declaartion time
   // pair<int,char> p(1,'B');

   //intialize and declaration at different time
    pair<int,char> p;
    p=make_pair(1,'B');
    cout<<p.first<<" - -> "<<p.second<<endl;
}

