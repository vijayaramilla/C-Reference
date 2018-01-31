struct TreeNode {
	int data;
	TreeNode* left;
	TreeNode* right;
};
class BinarySearchTree {
	private:
		TreeNode root;

	public:
		BinarySearchTree();
		void addNode(TreeNode* node);
		bool isEmpty();
		int size();
};