#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <iostream>

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution{
public:
	void solve(TreeNode* node, int cpm, int& ans){
		if(!node){
			return;
		}
		if(node->val >= cpm){
			++ans;
			cpm=node->val;
		}
		solve(node->left, cpm, ans);
		solve(node->right, cpm, ans);
	}
	int goodNodes(TreeNode* root){
		int m=root->val;
		int ans=0;
		solve(root, root->val, ans);
		return ans;
	}

	void inorder(TreeNode* node){
	    if(node){
            inorder(node->left);
            std::cout<<node->val<<" ";
            inorder(node->right);
	    }
	}

	void preorder(TreeNode* node){
	    if(node){
            std::cout<<node->val<<" ";
            preorder(node->left);
            preorder(node->right);
	    }
	}

	void postorder(TreeNode* node){
	    if(node){
            postorder(node->left);
            postorder(node->right);
            std::cout<<node->val<<" ";
	    }
	}
};

#endif // SOLUTION_HPP