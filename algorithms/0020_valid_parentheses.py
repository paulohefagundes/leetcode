class Solution:
    def isValid(self, s):
        stack = []
        map = {")": "(", "}": "{", "]": "["}
        for c in s:
            if c in map.values():
                stack.append(c)
            elif c in map.keys():
                if stack == [] or stack.pop() != map[c]:
                    return False

        return stack == []
