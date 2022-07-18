#include <stdio.h>
#include <stdlib.h> 
typedef struct Binnode//结构定义
{
    char data;//数据域
    struct Binnode *lchild;//左孩子
    struct Binnode *rchild;//右孩子
}Binnode, *Bintree;

//创建二叉树
void Create_Bintree(Bintree *bt)
{
     char ch; 
     if((ch = getchar()) == '#') 
	 {
		*bt = NULL;//空子树
     } 
	 else 
	 {
         *bt = (Binnode *)malloc(sizeof(Binnode));//开辟空间
         (*bt)->data = ch;
         Create_Bintree(&(*bt)->lchild);//创建左子树
         Create_Bintree(&(*bt)->rchild);//创建右子树
     }
}

//先序遍历
void Preorder(Bintree *bt)
{
   if (*bt != NULL)
   {
       printf("%c", ((*bt)->data));
       Preorder(&(*bt)->lchild);//先序遍历左子树
       Preorder(&(*bt)->rchild);//先序遍历右子树
   }
}

//中序遍历
void Inorder(Bintree *bt)
{
    if (*bt != NULL)
	{
        Inorder(&(*bt)->lchild);//中序遍历左子树
        printf("%c", (*bt)->data);
        Inorder(&(*bt)->rchild);//中序遍历右子树
    }
}

//后序遍历
void Posorder(Bintree *bt)
{
      if (*bt != NULL)
	  {
          Posorder(&(*bt)->lchild);//后序遍历左子树
          Posorder(&(*bt)->rchild);//后序遍历右子树
          printf("%c", (*bt)->data);
      }
}

int main()
{
      Bintree T;
		printf("请输入一个二叉树，空结点则输入#：\n");
      Create_Bintree(&T);
		printf("Tree Create OK!\n");
		printf("先序遍历:\n");
      Preorder(&T);
		printf("\n中序遍历:\n");
      Inorder(&T);
		printf("\n后序遍历:\n");
      Posorder(&T);
		printf("\n");
 }