1.	#include <stdio.h>
2.	#include <stdlib.h>
3.	struct node
4.	{
5.	    int info;
6.	    struct node *left, *right;
7.	};
8.	struct node *createnode(int key)
9.	{
10.	    struct node *newnode = (struct node*)malloc(sizeof(struct node));
11.	    newnode->info = key;
12.	    newnode->left = NULL;
13.	    newnode->right = NULL;
14.	    return(newnode);
15.	}
16.	void inorder(struct node *root)
17.	{
18.	    if(root != NULL)
19.	    {
20.	        inorder(root->left);
21.	        printf(" %d ",root->info);
22.	        inorder(root->right);
23.	    }
24.	}
25.	void smallest(struct node *root)
26.	{
27.	    while(root != NULL && root->left != NULL)
28.	    {
29.	        root = root->left;
30.	    }
31.	    printf("\nSmallest value is %d\n", root->info);
32.	}
33.	void largest(struct node *root)
34.	{
35.	    while (root != NULL && root->right != NULL)
36.	    {
37.	        root = root->right;
38.	    }
39.	    printf("\nLargest value is %d", root->info);
40.	}
41.	/*
42.	 * Main Function
43.	 */
44.	int main()
45.	{
46.	    /* Creating first Tree. */
47.	    struct node *newnode = createnode(25);
48.	    newnode->left = createnode(17);
49.	    newnode->right = createnode(35);
50.	    newnode->left->left = createnode(13);
51.	    newnode->left->right = createnode(19);
52.	    newnode->right->left = createnode(27);
53.	    newnode->right->right = createnode(55);
54.	    /* Sample Tree 1:
55.	     *               25
56.	     *             /    \
57.	     *            17     35
58.	     *           / \     / \
59.	     *         13  19   27 55
60.	     */
61.	    printf("Inorder traversal of tree 1 :");
62.	    inorder(newnode);
63.	    largest(newnode);
64.	    smallest(newnode);
65.	 
66.	    /* Creating second Tree. */
67.	    struct node *node = createnode(1);
68.	    node->right = createnode(2);
69.	    node->right->right = createnode(3);
70.	    node->right->right->right = createnode(4);
71.	    node->right->right->right->right = createnode(5);
72.	    /* Sample Tree 2:   Right Skewed Tree (Unbalanced).
73.	     *               1
74.	     *                \
75.	     *                 2
76.	     *                  \
77.	     *                   3
78.	     *                    \
79.	     *                     4
80.	     *                      \
81.	     *                       5
82.	     */
83.	    printf("\nInorder traversal of tree 2 :");
84.	    inorder(node);
85.	    largest(node);
86.	    smallest(node);
87.	 
88.	    /* Creating third Tree. */
89.	    struct node *root = createnode(15);
90.	    /* Sample Tree 3- Tree having just one root node.
91.	     *              15
92.	     */
93.	    printf("\nInorder traversal of tree 3 :");
94.	    inorder(root);
95.	    largest(root);
96.	    smallest(root);
97.	    return 0;
98.	}

