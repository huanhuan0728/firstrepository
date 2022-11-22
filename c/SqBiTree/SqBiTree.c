//
//  SqBiTree.c
//  SqBiTree
//
//  Created by xuhuan lu on 2022/11/22.
//

#include "SqBiTree.h"

void InitBiTree(BiTree *T){//创建一颗空二叉树
    
    
}

//创建一颗二叉树T，其中根结点的值为e，L和R分别为左子树和右子树
BiTree MakeBiTree(TElemType e, BiTree L, BiTree R){
    BiTree t;
    
    t = (BiTree)malloc(sizeof(BiTNode));
    if (t == NULL)
        return NULL;
    
    t->data = e;    //根结点值为e
    t->lchild = L;  //L作为t的左子树
    t->rchild = R;  //R作为t的右子树
    
    return  t;
}

//销毁二叉树
void DestroyBiTree(BiTree T){
    if (T == NULL)
        return;
    if (T->lchild != NULL){
        DestroyBiTree(T->lchild);
        T->lchild = NULL;
    }
    if (T->rchild != NULL){
        DestroyBiTree(T->rchild);
        T->lchild = NULL;
    }
    if (T != NULL){
        free(T);
        T = NULL;
    }
}

//对二叉树判空。若为空返回TRUE，不为空返回FALSE
Status BiTreeEmpty(BiTree T){
    if (T == NULL)
        return TRUE;
    else
        return FALSE;
}








