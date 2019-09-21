#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node* left;
    struct node* right;
};

int sumTheTreeValues(struct node* root) {
    if (root == NULL) return 0;
    return (root->value + sumTheTreeValues(root->left) + sumTheTreeValues(root->right));
}

void buildTree(struct node* node, int depth) {
    if (depth > 0) {
        node->value = rand() % 50;
        printf("Depth: %d  Node: %d\n", depth, node->value);
        depth--;
        if (depth > 1) {
            node->left  = (struct node*)malloc(sizeof(struct node*));
            buildTree(node->left, depth);
            node->right = (struct node*)malloc(sizeof(struct node*));
            buildTree(node->right, depth);
        }
    }
}

void removeTree(struct node* node) {
    if (node != NULL) {
        removeTree(node->left);
        removeTree(node->right);
        printf("Removing: %d\n", node->value);
        free(node);
    }
}

int main() {
    struct node* root = (struct node*)malloc(sizeof(struct node*));
    buildTree(root, 4);
    printf("Sum of the tree: %d\n", sumTheTreeValues(root));
    removeTree(root);
    return 0;
}