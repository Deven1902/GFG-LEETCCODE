# Appraoch 

'''
1) We can use an array of a fixed size to store key-value pairs.
2) The array will have a predefined size, and we'll use a simple hash function to determine the index at which each key-value pair should be stored.
3) We'll use a linked list to handle collisions.

'''
class MyHashMap:

    def __init__(self):
        self.hashmap = []

   
    def put(self, key: int, value: int) -> None:
        for i in range(len(self.hashmap)):
            if self.hashmap[i][0] == key:
                self.hashmap[i] = (key, value)
                return
        
        self.hashmap.append((key, value))

    def get(self, key: int) -> int:
        for k, v in self.hashmap:
            if k == key:
                return v
        return -1

    def remove(self, key: int) -> None:
        for i in range(len(self.hashmap)):
            if self.hashmap[i][0] == key:
                self.hashmap.pop(i)
                return

# time complexity:- O(N)
# space complexity:- O(n+m)

# Your MyHashMap object will be instantiated and called as such:
# obj = MyHashMap()
# obj.put(key,value)
# param_2 = obj.get(key)
# obj.remove(key)