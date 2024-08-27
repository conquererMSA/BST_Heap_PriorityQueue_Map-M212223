#include<bits/stdc++.h>
using namespace std;
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
Node* convert(int a[],int l, int r){
    if(l>r) return NULL;
    int mid=(l+r)/2;
    Node* root=new Node(a[mid]);
    Node* leftNode=convert(a,l,mid-1);
    Node* rightNode=convert(a,mid+1,r);
    root->left=leftNode;
    root->right=rightNode;
    return root;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        a[i]=x;
    }
    Node* root=convert(a,0,n-1);
    printLevelOrder(root);
    return 0;
}