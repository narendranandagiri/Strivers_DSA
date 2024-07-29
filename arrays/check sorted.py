class Solution:
    def check(self, nums: List[int]) -> bool:
        check = 0
        for i in range(1,len(nums)):
            if nums[i] < nums[i-1]:
                check+=1
                print(nums[i],nums[i-1])
        if nums[len(nums)-1] > nums[0]:
            check+=1        
        return not check > 1        
