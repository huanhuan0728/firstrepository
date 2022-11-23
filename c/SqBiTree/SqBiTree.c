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
void DestroyBiTree(BiTree T) {
    if(T == NULL)
        return;
    if(T->lchild != NULL) {
        DestroyBiTree(T->lchild);
        T->lchild = NULL;
    }
    if(T->rchild != NULL) {
        DestroyBiTree(T->rchild);
        T->lchild = NULL;
    }
    if(T != NULL) {
        free(T);
        T = NULL;
    }
}

//对二叉树判空。若为空返回TRUE，不为空返回FALSE
//
Status BiTreeEmpty(BiTree T){
    if (T == NULL)
        return TRUE;
    else
        return FALSE;
}

//将一颗二叉树T分解成根，左子树，右子树
Status BreakBiTree(BiTree T, BiTree L, BiTree R) {
    if(T != NULL) {
        L = T->lchild;
        R = T->rchild;
        T->lchild = NULL;
        T->rchild = NULL;
        
        return TRUE;
    }
    else
        return OVERFLOW;
}

//替换左子树。若T非空，则用LT替换T的左子树，并用LT返回T原有的左子树
Status ReplaceLeft(BiTree T, BiTree LT) {
    BiTree temp;
    
    if(T == NULL)
        return Error;
    temp = T->lchild;
    T->lchild = LT;
    LT = temp;
    return OK;
}

//替换右子树。若T非空，则用LT替换T的左子树，并用LT返回T原有的左子树
Status ReplaceRight(BiTree T, BiTree RT) {
    BiTree temp;
    
    if(T == NULL)
        return Error;
    temp = T->lchild;
    T->lchild = RT;
    RT = temp;
    
    return OK;
}

Status visit(TElemType a){
    if(a != '#'){
        printf("%c", a);
        return OK;
    }
    else
        return Error;
}

//中序遍历二叉树
Status InOrderTraverse(BiTree T, Status(*visit)(TElemType)) {
    if(T == NULL)
        return OK;
    if(InOrderTraverse(T->lchild, visit) == Error)
        return Error;
    if(visit(T->data) == Error)
        return Error;
    return InOrderTraverse(T->rchild, visit);
}











