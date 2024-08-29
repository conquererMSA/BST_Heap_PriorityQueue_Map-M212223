#include<bits/stdc++.h>
using namespace std;
/*
I love cricket He loves cricket They love football We love Rugby
*/
int main(){
    string sentence;
    getline(cin, sentence);
    string word;
    stringstream ss(sentence);
    map<string, int> mp;
    while(ss>>word){
        mp[word]++;
    }
    cout<<mp["love"]<<endl; //3
    cout<<mp["loves"]<<endl; //1
    
    // for(auto it=mp.begin(); it!=mp.end(); it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    return 0;
}