class Solution:
    def fib(self, n: int) -> int:
        if n == 0:
            return 0
        if n == 1:
            return 1    
        fib = [-1] * 31
        fib[0] = 0
        fib[1] = 1
        for i in range(2,30+1):
            fib[i] = fib[i-1] +fib[i-2]
            if i == n:
                return fib[i]
        
