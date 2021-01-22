/*给定⼀个 1~n 的排列 P，即⻓度为 n，且 1~n 中所有数字都恰好出现⼀次的序列。现在按顺序将排列
中的元素⼀⼀插⼊到初始为空的⼆叉搜索树中（左⼩右⼤），问最后每个节点的⽗亲节点的元素是什
么。特别地，根节点的⽗亲节点元素视为 0。*/

#include<iostream>
using namespace std;
typedef struct node{
	int num;
	struct node *left, *right;
}NODE;

void insert_node(NODE *root, int a);
void mid_order(NODE *root, int parent);

int main()
{
	int n;
	cin >> n;
	int a;
	NODE *tmp, *root = new NODE;
	cin >> a;
	root->num = a;
	root->left = NULL;
	root->right = NULL;
	for (int i = 1; i < n; i++)
	{
		cin >> a;
		insert_node(root, a);

	}

	mid_order(root, 0);
	return 0;

}

void insert_node(NODE *root,int a)
{
	if (root->num > a)
	{
		if (root->left != NULL)
		{
			insert_node(root->left, a);

		}
		else
		{
			NODE *tmp = new NODE;
			tmp->num = a;
			tmp->left = NULL;
			tmp->right = NULL;
			root->left = tmp;
		}
	}
	else 
	{
		if (root->right != NULL)
		{
			insert_node(root->right, a);

		}
		else
		{
			NODE *tmp = new NODE;
			tmp->num = a;
			tmp->left = NULL;
			tmp->right = NULL;
			root->right = tmp;
		}
	}
}

void mid_order(NODE *root, int parent)
{
	if (root == NULL)
	{
		return;
	}
	mid_order(root->left,root->num);
	//访问
	cout << parent << " ";
	mid_order(root->right,root->num);
	return;
}