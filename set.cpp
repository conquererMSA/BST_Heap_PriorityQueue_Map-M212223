#include<bits/stdc++.h>
using namespace std;
/*
 Set balanced BST use kore.
 Set sorted value dey, set duplicate value rakhe na. Set logN complexity te value return kore.
*/
int main(){
    set<int> s;
    s.insert(1);
    s.insert(100);
    s.insert(20);
    cout<<s.count(1000)<<endl; //0
    cout<<s.count(100)<<endl; //1
    //reverse print set values
    for(auto it=s.rbegin(); it!=s.rend(); it++){
        //Set, ascending order e sort kore
        cout<<*it<<" ";
    }
    return 0;
}