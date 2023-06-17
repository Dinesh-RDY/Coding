import java.util.ArrayList;
import java.util.List;

public class Solution {
    private List<String> ans = new ArrayList<>();

    private void generate(int o, int c, int n, String s) {
        if (s.length() == 2 * n) {
            ans.add(s);
        }
        if (o < n)
            generate(o + 1, c, n, s + '(');
        if (c < o)
            generate(o, c + 1, n, s + ')');
    }

    public List<String> generateParenthesis(int n) {
        generate(0, 0, n, "");
        return ans;
    }
}
