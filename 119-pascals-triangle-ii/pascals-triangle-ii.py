class Solution:
    def getRow(self, rowI: int) -> List[int]:
        # declaring a list representing rows of pascals traingle. 

        # 1 element stands for the first row. 
        res = [[1]]
        
        # iterate through rows.
        for i in range(rowI):
            temp = [0] + res[-1] + [0]
            row = []

            # iterate through elements of the row. 
            for j in range(len(res[-1])+1):
                row.append(temp[j] + temp[j+1])
            res.append(row)

        # returns the last row -> rowI. 
        return res[-1]