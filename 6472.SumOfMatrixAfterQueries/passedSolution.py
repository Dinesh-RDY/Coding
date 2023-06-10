from typing import List


class Solution:
    def matrixSumQueries(self,n:int,q:List[List])->int:
        remainCols,remainRows,ans = n ,n,0
        rows,cols = [False] * n, [False] * n
        for i in range(len(q) - 1, -1 , -1):
            t,index, v = q[i][0], q[i][1], q[i][2] 
            if t == 0 and not rows[index]:
                rows[index] = True
                ans += remainCols * v
                remainRows -=1 
            elif t == 1 and not cols[index]:
                cols[index] = True
                ans+= remainRows * v
                remainCols -= 1

        return ans;
