#include<bits/stdc++.h>
using namespace std;
//max Heap e parentNode childNode gulu theke boro hoy.
int main(){
    vector<int> v={50,40,45,30,35,42,32,25,20,10};
    int x;
    cin>>x;
    v.push_back(x);
    int currIndex=v.size()-1;
    //vector er last index elem er sathe tar parent element er compare korte hobe.
    while(currIndex!=0){
        //currIndex 0 hole loop bondho hoye zabe.
        int prIndex=(currIndex-1)/2; // currIndex theke parent elem er index khuja hocce.
        if(v[prIndex]<v[currIndex]){
            //zodi vector er parent element current element theke boro hoye zay tahole value swap hobe.
            swap(v[prIndex], v[currIndex]);
        }
        else
        //ar zodi parent value current value theke boro hoye zay tokhon loop break hobe.
          break;
        currIndex=prIndex;
    }
    for(int val:v){
        cout<<val<<" ";
    }
    return 0;
}