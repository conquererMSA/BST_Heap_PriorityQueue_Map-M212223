#include<bits/stdc++.h>
using namespace std;
//min Heap e parentNode childNode gulu theke chuto hoy.
int main(){
    vector<int> v={50,40,45,30,35,42,32,25,20,10};
    int x;
    cin>>x;
    v.push_back(x);
    int currIndex=v.size()-1;
    while(currIndex!=0){
        int prIndex=(currIndex-1)/2; 
        if(v[prIndex]>v[currIndex]){
            swap(v[prIndex], v[currIndex]);
        }
        else
          break;
        currIndex=prIndex;
    }
    for(int val:v){
        cout<<val<<" ";
    }
    return 0;
}