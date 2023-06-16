class Solution:
    def isMatch(c, d):
        if ((c == ')' and d == '(') or (c == ']' and d == '[') or (c == '}' and d == '{')):
            return True
        return False

    def isValid(self, s: str) -> bool:
        stk = []
        for c in s:
            if c == '(' or c == '[' or c == '{':
                stk.append(c)
            elif len(stk) == 0 or not self.isMatch(c, stk[-1]):
                return False
            else:
                stk.pop()

        return len(stk) is 0
