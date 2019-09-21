#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node* left;
    struct node* right;
};

int sumTheLeftiestValues(struct node* root) {
    if (root == NULL) return 0;
    return (sumTheLeftiestValues(root->left) + root->value);
}

int sumTheRightiestValues(struct node* root) {
    if (root == NULL) return 0;
    return (sumTheRightiestValues(root->right) + root->value);
}

int sumTheTreeValues(struct node* root) {
    if (root == NULL) return 0;
    return (root->value + sumTheTreeValues(root->left) + sumTheTreeValues(root->right));
}

int heightOfTree(struct node* node, int height) {
    if (node == NULL) return height;
    return height + heightOfTree(node->left, height++);
}

int sumInnerTreeNodes(struct node* root) {
    int sumLeft = sumTheLeftiestValues(root);
    int sumRight = sumTheRightiestValues(root);
    int sum = sumTheTreeValues(root);
    return (sum - (sumLeft + sumRight - root->value));
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
        //printf("Removing: %d\n", node->value);
        free(node);
    }
}

int main() {
    struct node* root = (struct node*)malloc(sizeof(struct node*));
    buildTree(root, 5);
    printf("Sum of the tree: %d\n", sumTheTreeValues(root));
    printf("Sum of leftiest nodes: %d\n", sumTheLeftiestValues(root));
    printf("Sum of leftiest nodes: %d\n", sumTheRightiestValues(root));
    printf("Height of Tree: %d\n", heightOfTree(root, 0));
    printf("Sum of inner nodes: %d\n", sumInnerTreeNodes(root));
    removeTree(root);
    return 0;
}