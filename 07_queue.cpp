//queue works on the principal of fifo - first in first out
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    for(int i=0;i<10;i++){
        q.push(i+1);
    }
    int sum(0);
    while(!q.empty()){
        sum+=q.front();
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl<<sum<<endl;
}