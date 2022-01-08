

CheckBalancedParanthesis(exp)
{
  n <- length(exp)
  Create a Stack:- S

  for i <- 0 to n-1
  {
    if exp[i] is '(' or '{' or '['
    {    
        push(exp[i])
    }
    else if exp[i] is ')' or '}' or ']'
    {
        if(S is empty) || (top does not pair with exp[i])
        {
            return false
        }
        else
        {
            pop()
        }
    }
  }
 return S is empty ? true : false
 }
