#include<iostream.h>
#include<stdlib.h>
struct node
{
    int key;
    struct node*left,*right;
};
struct node*newnode(int item)
{
   struct node*temp=(struct node*)malloc(sizeof(struct node));
   temp->key=item;
   temp->left=temp->right=NULL;
   return temp;
}
struct node*insert(struct node*node,int key)
{
    if(node==NULL)
      return newnode(key);
    if(key<node->key)
       node->left=insert(node->left,key);
    else if(key>node->key)
       node->right=insert(node->right,key);
       return node;   
}
void Preorder(struct node*root)
{
    if(root!=NULL)
    {
        printf("%d\n",root->key);
        Preorder(root->left);
        Preorder(root->right);
    }
}
void Inorder(struct node*root)
{
    if(root!=NULL)
    {
        Inorder(root->left);
        printf("%d\n",root->key);
        Inorder(root->right);
    }
} 
void Postorder(struct node*root)
{
    if(root!=NULL)
    {
        Postorder(root->left);
        Postorder(root->right);
        printf("%d\n",root->key);
        
    }
} 
void main()
{
    struct node*root=NULL;
    clrscr();
    root=insert(root,50);
    insert(root,30);
    insert(root,20);
    insert(root,40);
    insert(root,70);
    insert(root,60);
    insert(root,80);
    printf("Preorder Traversal Of Binary Sreach Tree\n");
    Preorder(root);
    printf("Inorder Traversal Of Binary Sreach Tree\n");
    Inorder(root);
    printf("Postorder Traversal Of Binary Sreach Tree\n");
    Postorder(root);
    getch();
}
