class Solution(object):
    def lengthOfLongestSubstring(self, s):
        substring = set()
        max_length = 0
        left = right = 0
        # Iterate through the characters in the string
        while right < len(s):
            # If the current character is not in the set, add it and move the right index to the right
            if s[right] not in substring:
                substring.add(s[right])
                right += 1
                # Update the length of the longest substring if necessary
                max_length = max(max_length, right - left)
            # If the current character is in the set, remove the character at the left index and move the left index to the right
            else:
                substring.remove(s[left])
                left += 1
        # Return the length of the longest substring
        return max_length