#include<iostream>
using namespace std;

int getprintways(int n, int k){
    //base case 
    if(n==1)  {
        return 3;
    }
    if(n==2){
        return (k+k*(k-1));
    }

    int ans = (k-1) *(getprintways(n-1,k) + getprintways(n-2,k));
    return ans;

}

int main(){
    int n=3;
    int k= 3;
    int ans = getprintways(n,k);
    cout<<ans<<endl;
}
