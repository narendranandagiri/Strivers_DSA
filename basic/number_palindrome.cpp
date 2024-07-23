class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        if x < 10:
            return True
        ans = 0
        actual = x
        while x > 0:
            temp = x%10
            ans = (ans*10) + temp
            x = x//10
        return actual == ans       

          
