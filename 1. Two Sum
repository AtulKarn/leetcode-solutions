class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        vector<int>::iterator itr1,itr2;
        int i=0,j;
        for(itr1=nums.begin();itr1<nums.end();itr1++)
        {
            j=i+1;
            for(itr2=itr1+1;itr2<nums.end();itr2++)
            {
                if (*itr1+*itr2 == target)
                {
                    answer.push_back(i);
                    answer.push_back(j);
                    break;
                }
                j++;
            }
            i++;
        }
        return answer;
    }
};
