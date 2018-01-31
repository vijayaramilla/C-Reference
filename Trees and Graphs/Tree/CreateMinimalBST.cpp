# include"Tree.h"
# include<vector>
# include<iostream>

TreeNode* createMinimalBST(std::vector<int> &arr);
TreeNode* createMinimalBST(std::vector<int> &arr, int start, int end);

TreeNode* createMinimalBST(std::vector<int> &arr) {
	return createMinimalBST(arr, 0, arr.size()-1);
}

TreeNode* createMinimalBST(std::vector<int> &arr, int start, int end) {
	if (end < start){
		return NULL;
	}
	int mid = (start + end)/2;
	TreeNode* n;
	n->data = arr[mid];
	n->left = createMinimalBST(arr, start, mid-1);
	n->right = createMinimalBST(arr, mid+1, end);

	return n;
}

int main(){
	std::vector<int> arr{1,2,3,4,5,6,7,8,9};
	TreeNode* node = createMinimalBST(arr);
	return 0;
}