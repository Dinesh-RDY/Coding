class Solution:
    def intToRoman(self, num:int)->str:
        ans = ""
        nums= [1,4,5,9,10,40,50,90,100,400,500,900,1000]
        romans = ["I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"]
        i = len(num) - 1
        while num:
            if num < nums[i]:
                i -= 1
            else:
                num -= nums[i]
                ans += romans[i]

        return ans