#include<bits/stdc++.h>
using namespace std;
/*
Binary Tree te insert korar kkhetre tree er notun value node tree er NULL node e place hoy. Tree er moddhye khane place hoy na.
Ekti matro node insert er kkhtre best case complexity logN, worst case complexity O(h).
Onek gulunode insert er kkhetre worst case compleity O(hN), best case complexity O(Nlogn).
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

void insertNodeInBST(Node* &root, int x){
   if(root==NULL){
    root=new Node(x);
    return;
   }
   if(x<root->val){
      if(root->right==NULL){
        root->right=new Node(x);
        return;
      }
      else{
        insertNodeInBST(root->right, x);
      }
   }
   else{
       if(root->left==NULL){
        root->left=new Node(x);
        return;
       }
       else{
        insertNodeInBST(root->left, x);
        return;
       }
   }
}
void printLevelOrder(Node* root){
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty()){
        Node* node=q.front();
        q.pop();

        cout<<node->val<<" ";
         if(node->left) q.push(node->left);
         if(node->right) q.push(node->right);
    }
}
int main(){
    Node* root=takeInputOfTree();
    insertNodeInBST(root,10); //20 10 30 15 25 35 10 
    insertNodeInBST(root, 4); //20 10 30 15 25 35 10 4 
    printLevelOrder(root);
    return 0;
}