#include<iostream>
#include<cstdlib>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
}*root=NULL;


node* insertion (node* root,int n)
{
    if (root==NULL)
    {
        root=new node;
        root->data=n;
        root->left=root->right=NULL;
        return root;
    }

    else
   {
        if (n<root->data)
            root->left=insertion(root->left,n);
        else
            root->right=insertion (root->right,n);
        return (root);
    }
}

void display(node* root)
{
    if(root==nullptr)
        return;
    display(root->left);
    display(root->right);
    if(root->left==nullptr&&root->right==nullptr)
        cout<<root->data<<" ";
}

int main(){

    root=insertion(root,40);
    root=insertion(root,50);
    root=insertion(root,10);
    root=insertion(root,30);
    root=insertion(root,70);
    root=insertion(root,90);
    root=insertion(root,20);
    root=insertion(root,35);
    root=insertion(root,5);
    display(root);
}


