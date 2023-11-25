#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverseKgroup(queue<int> &q, int k){
    stack<int> s;

// push k elements into the stack
    for(int i=0 ; i<k ; i++){
        int temp = q.front();
        q.pop();
        s.push(temp);
    }

// push all k elements into queue
    while(!s.empty()){
        int temp = s.top();
        s.pop();
        q.push(temp);
    }

    // push and pop (n-k) ele into the queue
    int n = q.size();
    for(int i=0 ;i<n-k ;i++){
        int temp = q.front();
        q.pop();
        q.push(temp);
    }
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    reverseKgroup(q,3);

    while(!q.empty()){
        int ele = q.front();
        q.pop();
        cout<< ele<< " ";
    }
    return 0;
}
