#include <bits/stdc++.h>
class _stack{
  stack<int> s;
  int minEle;
  public :
  int getMin();
  int pop();
  void push(int);
};
int _stack :: getMin()
{
   //Your code here
   if(s.empty())
   return -1;
   return minEle;
}
/*returns poped element from stack*/
int _stack ::pop()
{
    int k;
   //Your code here
   if(s.empty())
   return -1;
   int y=s.top();
   s.pop();
   if(y>=minEle)
  return y;
   else
   {
       k=minEle;
       minEle=(2*minEle)-y;
   }
   return k;
}
/*push element x into the stack*/
void _stack::push(int x)
{
   //Your code here

   if(s.empty())
   {
          minEle=x;
          s.push(x);
   }
   else
   {
       if(x<=minEle)
       {
       s.push(2*x-minEle);
       minEle=x;
       }
       else
           s.push(x);
   }
}
int main(){cout << "Stack formed\n";return 0;}
