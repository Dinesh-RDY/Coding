class Solution {
    public long matrixSumQueries(int n, int[][] queries) {
        int[][] rows = new int[n][2], cols = new int[n][2];
        int i = 1;
        for (int[] q : queries) {
            if (q[0] == 0) {
                rows[q[1]][0] = i;
                rows[q[2]][1] = q[2];
            } else {
                cols[q[1]][0] = i;
                cols[q[2]][1] = q[2];
            }
            i++;
        }
        long ans = 0;
        for (i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                ans += rows[i][0] > cols[j][0] ? rows[i][1] : cols[j][1];
            }
        }
        return ans;
    }
}