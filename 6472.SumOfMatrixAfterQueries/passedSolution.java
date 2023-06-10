public class passedSolution {
    public long matrixSumQueries(int n, int[][] q) {
        boolean[] rows = new boolean[n], cols = new boolean[n];
        long ans = 0;
        int remainRows = n, remainCols = n;
        for (int i = q.length; i >= 0; i--) {
            int type = q[i][0], index = q[i][1], v = q[i][2];
            if (type == 0 && !rows[index]) {
                rows[index] = true;
                ans += v * remainCols;
                remainRows--;
            } else if (type == 1 && !cols[index]) {
                cols[index] = true;
                ans += v * remainRows;
                remainCols--;
            }
        }
        return ans;
    }
}