#include "solutionone.hpp"

int main(){

	TreeNode* root= new TreeNode(3);
	root->left=new TreeNode(1);
	root->right=new TreeNode(4);
	root->left->left=new TreeNode(3);
	root->left->right=new TreeNode(0);
	root->right->left=new TreeNode(1);
	root->right->right=new TreeNode(5);

	Solution solution;
	int number=solution.goodNodes(root);

	std::cout<<"Number of good nodes: "<<number<<std::endl;

	std::cout<<"Recorrido inorder: ";
	solution.inorder(root);
	std::cout<<std::endl;

	std::cout<<"Recorrido Preorder: ";
	solution.preorder(root);
	std::cout<<std::endl;

	std::cout<<"Recorrido Postorder: ";
	solution.postorder(root);
	std::cout<<std::endl;

	return 0;
}
