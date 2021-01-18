#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

struct node* insert( struct node* root, int data ) {
		
	if(root == NULL) {
	
        struct node* node = (struct node*)malloc(sizeof(struct node));

        node->data = data;

        node->left = NULL;
        node->right = NULL;
        return node;
	  
	} else {
      
		struct node* cur;
		
		if(data <= root->data) {
            cur = insert(root->left, data);
            root->left = cur;
		} else {
            cur = insert(root->right, data);
            root->right = cur;
		}
	
		return root;
	}
}

/* you only have to complete the function given below.  
Node is defined as  

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/


void postOrder(struct node* root) {
    if(root!=NULL){
        if(root->left!=NULL){
            postOrder(root->left);
        }
        if(root->right!=NULL){
            postOrder(root->right);
        }
        cout << root->data << " ";
    }
}

