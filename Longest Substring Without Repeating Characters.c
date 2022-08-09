Given a string s, find the length of the longest substring without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.



int lengthOfLongestSubstring(char * s){

    int count=1;
    int max_count=1;
    int j_start=0;
    
    if(!s[0])
        return 0;
    else if(!s[1])
        return max_count;
    
    
    for(int i=1; s[i]; i++)
    {
        for(int j=j_start; j<i; j++)
        {
            if(s[i] != s[j])
                count++;
            else
                j_start = j+1;         
        }
        if(max_count < count)
            max_count = count;
        count = 1;
    }
    return max_count;
}
