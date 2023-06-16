import java.util.Stack;

class Solution {
    private boolean isMatch(char c, char d) {
        if ((c == ')' && d == '(') || (c == ']' && d == '[') || (c == '}' && d == '{'))
            return true;
        return false;
    }

    public boolean isValid(String s) {
        Stack<Character> stk = new Stack<>();
        for (char c : s.toCharArray()) {
            if (c == '(' || c == '[' || c == '{')
                stk.push(c);
            else if (stk.empty() || !isMatch(c, stk.peek()))
                return false;
            else
                stk.pop();
        }
        return stk.empty();
    }
}