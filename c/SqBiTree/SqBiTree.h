//
//  SqBiTree.h
//  SqBiTree
//
//  Created by xuhuan lu on 2022/11/22.
//

#ifndef SqBiTree_h
#define SqBiTree_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char TElemType; //假设二叉树结点类型为字符型
#define  Status int
#define TRUE 1
#define OK 1
#define FALSE 0
#define OVERFLOW -1
#define Error 0

typedef struct BiTNode{
    TElemType data; //数据域
    struct BiTNode *lchild, *rchild;    //左右孩子的指针域
} BiTNode, * BiTree; //顺序存储的二叉树

void InitBiTree(BiTree *T);
//创建一颗空二叉树

BiTree MakeBiTree(TElemType e, BiTree L, BiTree R);
//创建一颗二叉树T，其中根结点的值为e，L和R分别为左子树和右子树

void DestroyBiTree(BiTree T);
//销毁二叉树

Status BiTreeEmpty(BiTree T);
//对二叉树判空。若为空返回TRUE，不为空返回FALSE

Status BreakBiTree(BiTree T, BiTree L, BiTree R);
//将一颗二叉树T分解成根，左子树，右子树

Status ReplaceLeft(BiTree T, BiTree LT);
//替换左子树。若T非空，则用LT替换T的左子树，并用LT返回T原有的左子树

Status ReplaceRight(BiTree R, BiTree RT);
//替换右子树。若T非空，则用RT替换T的左子树，并用RT返回T原有的左子树


Status visit(TElemType a);

//中序遍历二叉树
Status InOrderTraverse(BiTree T, Status(*visit)(TElemType));


#endif /* SqBiTree_h */
