class Solution:
    def merge(self, arr_a: List[int], m: int, arr_b: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        
        insert_idx = len(arr_a) - 1
        idx_a = m - 1
        idx_b = n - 1
        
        while insert_idx >= 0:
            a = arr_a[idx_a] if idx_a >= 0 else -math.inf
            b = arr_b[idx_b] if idx_b >= 0 else -math.inf
            
            if a > b:
                arr_a[insert_idx] = a
                idx_a -= 1
            else:
                arr_a[insert_idx] = b
                idx_b -= 1
                
            insert_idx -= 1
        