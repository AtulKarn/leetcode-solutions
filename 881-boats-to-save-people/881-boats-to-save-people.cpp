class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int ans = 0;
        int left=0, right = people.size()-1;
        while(left<=right){
            if((people[right]+people[left]) <= limit){
                left++;
            }
            ans += 1;
            right--;
        }
        return ans;
    }
};