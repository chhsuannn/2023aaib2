#LeetCode 234. Palindrome Linked List
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        a = [] #先把 a 設成很小的、短短的陣列list
        while head != None:
            a.append(head.val) #先把 head 的那一串東西,轉換成診列
            head = head.next
        #print(a) #印出陣列

        N = len(a) # a有多少數字
        for i in range(N): # i 就照回圈跑
            if a[i] != a[N-1-i]: return False #頭尾不相同
        return True
        