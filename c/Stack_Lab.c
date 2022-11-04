bool InitStack_Sq2(SqStack2 *S, int size, int inc){    //初始化一个空栈
    if (size < 1 || inc < 1)
        return false;
    S->elem = (ElemType *) malloc(size*sizeof(ElemType));   //分配容量为size的存储空间
    if (S->elem == NULL)
        return false;
    
    S->top = S->elem;   //置空栈
    S->size = size; //记录初始栈的大小
    S->increment = inc; //记录初始的扩容大小
    return true;
    
}

bool StackEmpty_Sq2(SqStack2 *S){   //栈的判空
    if (S->top == S->elem)
        return false;
    else
        return true;
}

bool Push_Sq(SqStack2 *S, ElemType e){  //入栈
    ElemType *newbase;
    if((S->top - S->elem) == S->size){  //栈满
        newbase = (ElemType*)realloc(S->elem, (S->size + S->increment)*sizeof(ElemType));   //扩容
        if (newbase == NULL)
            return false;
        S->top = newbase + (S->top - S->elem);
        S->elem = newbase;
        S->size += S->increment;
        
        
    }
    *S->top++ = e;  //e入栈，S->top++
    return true;
}
