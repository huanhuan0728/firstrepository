 #include "allinclude.h"  //DO NOT edit this line
Status EnCQueue(CTagQueue &Q, ElemType x) { 
    // Add your code here
    if ( Q.rear % MAXSIZE == Q.front && Q.tag == 1) 
      return ERROR;
      else{
            Q.elem[Q.rear] = x;
            Q.rear = (Q.rear+1)% MAXSIZE;
      }
      
      if (Q.front == Q.rear)
      Q.tag = 1;
    
    return OK;
}

Status DeCQueue(CTagQueue &Q, ElemType &x){
   // Add your code here
   if (Q.front == Q.rear && Q.tag == 0)
    return ERROR;
  else{
    x = Q.elem[Q.front];
    Q.front = (Q.front+1)%MAXSIZE;
  }
  
  if (Q.front == Q.rear)
    Q.tag = 0;
  
  return OK;

}
