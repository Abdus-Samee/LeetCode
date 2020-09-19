class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int len = (int)startTime.size();
        int count = 0;
        
        for(int i = 0; i < len; i++){
            if((queryTime >= startTime[i]) && (queryTime <= endTime[i])) count++;
        }
        
        return count;
    }
};
