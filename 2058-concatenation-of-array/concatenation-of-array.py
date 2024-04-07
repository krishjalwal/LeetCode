class Solution(object):
    def getConcatenation(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """

        x = []

        for i in nums:
            x.append(i)
            
            
        for j in nums:
            x.append(j)
            

        return x
        