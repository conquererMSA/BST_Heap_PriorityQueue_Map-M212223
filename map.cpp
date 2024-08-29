#include<bits/stdc++.h>
using namespace std;
/*
Array hocce index-value pair. Array te 10^5 porzonto index-value rakha zay. Array er index sob somoy int hoy.
Map hocce key-value pair. Map er key shudhu int noy zekuno data type er hote pare. Map e 10^18 pozonto key-value rakha zay.
Map e kuno key diye value assign na thakle 0 rteurn kore. Tobe kuno key er value 0 assign takte pare. Map e kuno key er value ase kina jacai korar jonno count() use kora hoy.
*/
int main(){
    map<string,int> mp;
    mp.insert({"MSA", 12});
    mp.insert({"Adeel", 13});
    // cout<<mp["MSA"]<<endl;
    // cout<<mp["Tarek"]<<endl;
    // cout<<mp.count("TC")<<endl; //0
    mp["Tarek"]=122;
    mp["Musa"]=112;
    for(auto it=mp.begin(); it!=mp.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    
    return 0;
}