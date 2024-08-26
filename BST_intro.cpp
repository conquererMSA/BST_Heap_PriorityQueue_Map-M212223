#include<bits/stdc++.h>
using namespace std;
/*
Shudhu matro sorted binary tree te search kora. Binary Tree + Binary Search.
Sorted Binary Tree te kuno ektu node er left subtree te oi node er caite chuto value thakbe and right subtree te boro value thakbe.
Tree te duplicate value rakha zay na, duplicate value asle frq count diye handle korte hoy.
BST er complexity O(h);
*/
class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* takeInputOfTree(){
    int n;
    cin>>n;
    Node* root;
    if(n==-1) root=NULL;
    else root=new Node(n);

    queue<Node*> q;
    if(root) q.push(root);

    while(!q.empty()){
        //1. ber kore ana
        Node* p=q.front();
        q.pop();

       //2. jabotio kaj
        int l,r;
        cin>>l>>r;
        Node* left;
        Node* right;

        if(l==-1)  left=NULL;
        else left=new Node(l);
        if(r==-1)  right=NULL;
        else right=new Node(r);

        p->left=left;
        p->right=right;
        if(p->left) q.push(p->left);
        if(p->right)  q.push(p->right);

    }
    return root;
}
bool searchBST(Node* root, int x){
    if(root==NULL) return false;
    if(root->val==x) return true;
    if(x<root->val){
       bool r = searchBST(root->right, x);
       return r;
    }else{
        bool l=searchBST(root->left, x);
        return l;
    }
}
int main(){
    Node* root=takeInputOfTree();
    bool ans=searchBST(root, 15);
   if(ans){
    cout<<"YES";
    }
   else{ 
    cout<<"NO";
}
    return 0;
}