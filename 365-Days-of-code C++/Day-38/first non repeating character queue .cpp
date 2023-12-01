#include<iostream>
#include<queue>
using namespace std;

int main(){
    string str= "ababc";
    queue<int> q;
    int freq[25] ={0};

    for(int i=0 ;i< str.length() ; i++){
        char ch = str[i];
        freq[ch - 'a']++;
        q.push(ch);


        while(!q.empty()){
            char frontChar = q.front();
            if(freq[frontChar-'a'] > 1){
            // ye ans nhi hai 
            q.pop();
            }
            else {
            // 1 wala case hai ye 
            // yahi ans hai 
                cout<< frontChar<<" ";
                break;
            }   
        }
        if(q.empty()){
        cout<< "#"<<" ";
        }
    }

    // ans find karo 
    
}
