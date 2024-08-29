#include<bits/stdc++.h>
using namespace std;
/*
Heap hocce complete Binary Tree er array representation.
priority_queue hocce Heap ds er STL. Heap, behind the scene e array niye kaj kore.
Ekti priority_queue e kuno value push korar por oi queue er sob gulu value prority onuzaye sort hoye zay. Ejonno er complexity hoy O(NlogN)
*/
int main(){
    // priority_queue<int> pq; //descending
    priority_queue<int, vector<int>, greater<int>> pq; //ascending
    while(true){
        int cmd;
        cin>>cmd;
        if(cmd==0){
            int val;
            cin>>val;
            pq.push(val);
        }
        else if(cmd==1){
            cout<<pq.top()<<endl;
        }
        else if(cmd==2){
            pq.pop();
        }
        else break;
    }
    return 0;
}