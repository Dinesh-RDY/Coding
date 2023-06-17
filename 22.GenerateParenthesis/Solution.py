from typing import List
class Solution:
    ans = []
    def recurse(self,open:int,close:int,n:int,s:str)->None:
        if len(s) == 2*n:
            self.ans.append(s)
            return
        if open < n: self.recurse(open + 1, close,n, s + '(')
        if close < open: self.recurse(open,close+ 1, n, s+ ')')
            
    def generateParenthesis(self,n:int)-> List[str]:
        self.ans.clear()
        self.recurse(0,0,n,"")
        return self.ans
        