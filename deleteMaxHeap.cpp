#include<bits/stdc++.h>
using namespace std;
void insertMaxHeap(vector<int>&v, int x){
    v.push_back(x);
    int currIndex=v.size()-1;
    while(currIndex!=0){
        int prIndex=(currIndex-1)/2; 
        if(v[prIndex]<v[currIndex]){
            swap(v[prIndex], v[currIndex]);
        }
        else
          break;
        currIndex=prIndex;
    }
}
void deleteMaxHeap(vector<int>&v){
  v[0]=v[v.size()-1];
  v.pop_back();
  int currIndex=0;
  while(true){
    int leftIndex=currIndex*2+1;
    int rightIndex=currIndex*2+2;
    int lastIndex=v.size()-1;
    if(leftIndex<=lastIndex && rightIndex<=lastIndex){
         //node er left_right ache
         if(v[leftIndex]>=v[rightIndex] && v[leftIndex]>v[currIndex]){
            swap(v[leftIndex], v[currIndex]);
            currIndex=leftIndex;
         }
         else if(v[rightIndex]>=v[leftIndex] && v[rightIndex]>v[currIndex]){
            swap(v[rightIndex],v[currIndex]);
            currIndex=rightIndex;
         }
         else break;
    }
    else if(leftIndex<=lastIndex){
        //node er left ache, kintu right nei
        if(v[leftIndex]>v[currIndex]){
            swap(v[leftIndex], v[currIndex]);
            currIndex=leftIndex;
        }
        else break;
    }
    else if(rightIndex<=lastIndex){
        // node er right ache, kintu left nai
        if(v[rightIndex]>v[currIndex]){
            swap(v[rightIndex], v[currIndex]);
            currIndex=rightIndex;
        }
        else break;
    }
    else break;
  }
}
void printHeap(vector<int> v){
    for(int val:v){
        cout<<val<<" ";
    }
    cout<<endl;
}
int main(){
    int x;
    cin>>x;
    vector<int> v;
    for(int i=0; i<x; i++){
        int m;
        cin>>m;
        insertMaxHeap(v, m);
        }
    printHeap(v);
    deleteMaxHeap(v);
    printHeap(v);
    deleteMaxHeap(v);
    printHeap(v);

    return 0;
}