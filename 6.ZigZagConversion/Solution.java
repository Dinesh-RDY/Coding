import java.util.ArrayList;
import java.util.List;

public class Solution {
    // Use string builder instead
    public String convert(String s, int numRows) {
        if (s.length() < numRows || numRows == 1 || s.length() < 2)
            return s;
        int step = 1, index = 0;
        List<String> res = new ArrayList<String>(numRows);
        String ans = "";
        for (int i = 0; i < s.length(); i++) {
            res.set(index, res.get(index) + s.charAt(i));
            if (index == 0)
                step = 1;
            else if (index == numRows - 1)
                step = -1;
            if (step == 1)
                index++;
            else
                index--;
        }
        for (String x : res) {
            ans += res;
        }
        return ans;
    }
}