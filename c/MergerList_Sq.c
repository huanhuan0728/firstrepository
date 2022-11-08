void MergerList_Sq(SqList La, SqList Lb, SqList *Lc){
//已知有序顺序表La和Lb中的数据元素值都非递减排列
//归并La和Lb得到新的有序顺序表Lc，Lc的数据元素也按值非递减排列
  int i = 0, j = 0, size, increment = 10;
  ElemType ai, bj;
  size = La.length + Lb.length;
  InitList_Sq(Lc, size, increament);//创建新表Lc
  while(i<La.length && j < Lb.length){//表La和Lb均为非空
    GetElem_Sq(La,i,ai);//把La的第i元素到ai
    GetElem_Sq(Lb,j,bj);//把La的第i元素到bj
    if (ai < bj){
      Append_Sq(Lc, ai);//把ai放到表c中
      i++;//i指到下一项
    }
    else{
      Append_Sq(Lc, bj);//把bj放到表c中
      j++;
    }
  }
  
  while (i < La.length){//表La非空且表Lb空
    GetElem_Sq(La,i++,ai);
    Append_Sq(Lc,ai);
  }
  
  while (j < Lb.length){//表La非空且表Lb空
    GetElem_Sq(Lb,i++,bj);
    Append_Sq(Lb,bj);
  }
}
