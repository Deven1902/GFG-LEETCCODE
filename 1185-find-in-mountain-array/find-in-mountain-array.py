# """
# This is MountainArray's API interface.
# You should not implement it, or speculate about its implementation
# """
#class MountainArray:
#    def get(self, index: int) -> int:
#    def length(self) -> int:

class Solution:
    def findInMountainArray(self, target: int, mountain_arr: 'MountainArray') -> int:
        
        def f(l, r, vl, vr):
            if l > r:
                return -1
            if target == vl:
                return l
            if r - l == 1 and target == vr:
                return r
            if r - l <= 1:
                return -1
            if target < vl and target < vr:
                return -1

            m = (l + r) >> 1
            vm = mountain_arr.get(m)

            if vl >= vm:
                if target <= vm:
                    return f(m, r, vm, vr)
                return f(l, m, vl, vm)
            
            if vm <= vr:
                if target <= vm:
                    return f(l, m, vl, vm)
                return f(m, r, vm, vr)
            
            ret = f(l, m, vl, vm)
            if ret != -1:
                return ret
            return f(m, r, vm, vr)
        
        n = mountain_arr.length()
        return f(0, n-1, mountain_arr.get(0), mountain_arr.get(n-1))