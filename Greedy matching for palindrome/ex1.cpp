//https://leetcode.com/problems/shortest-palindrome/

class Solution {
public:
    string shortestPalindrome(string s) {
        int n = s.size(), i =0 , j = n-1;
        if (n <= 1 || isPalindrome(s)) return s;
        while(j >= 0)
        {
            if(s[i]==s[j])++i;
            --j;
        }
        string k = s.substr(0,i) , g = s.substr(i);
        string y = g;
        cout<<i<<" "<<k<<" , "<<g<<endl;
        reverse(g.begin(),g.end());
        return g + shortestPalindrome(k) + y;
    }

private:
    bool isPalindrome(const string& s) {
        int n = s.size();
        for (int i = 0; i <= n / 2; ++i) {
            if (s[i] != s[n - 1 - i]) return false;
        }
        return true;
    }
};
