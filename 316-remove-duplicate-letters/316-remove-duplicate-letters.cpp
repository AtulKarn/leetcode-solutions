class Solution {
public:
    string removeDuplicateLetters(string s) {
        /*
        First, we save the occurance of each char in s by using vector<int> dict(128,0)
        2. we make a result string
        3. traverse the string again, each time we see a char, we decrease the occurance in the dict, and check if this char has been in the result or not, if so, skip the char
        while the result.back() is larger than current char, we check if we can still see this result.back() in the latter substring. if we can still find it later, we can pop it from the back and add it back later
        4. add current char to the back of the result string
        5. set visited[current char]=true
        */
        
        vector<int> dict(128, 0);
        for(auto c: s)dict[c]++;
        vector<bool> visited(128, 0);
        string res="";
        for(int i=0;i<s.size();i++){
            dict[s[i]]--;
            if(visited[s[i]]==true)continue;
            while(!res.empty() && res.back()>s[i] && dict[res.back()]>0){
                visited[res.back()]=false;
                res.pop_back();
            }
            res+=s[i];
            visited[s[i]]=true;
        }
        return res;
    }
    
};