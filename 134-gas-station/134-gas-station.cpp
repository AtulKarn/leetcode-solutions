class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int startPos = 0, totalGas = 0, n = gas.size();
        for(int i=0;i<n;i++){
            totalGas += gas[i] - cost[i];
        }
        if (totalGas<0)
            return -1;
        int tank = 0;
        for(int i=0;i<n;i++){
            tank += gas[i] - cost[i];
            if (tank<0){
                startPos = i+1;
                tank = 0;
            }
        }
        return startPos;
    }
};