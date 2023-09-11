class Solution {
public:
    int climbStairs(int n) {
        int targetStair=n;
        int currentStair=0;
        unordered_map<int,int> memo;
        return countSteps(currentStair, targetStair, memo);
    }

private: 
    int countSteps(int currentStair, int targetStair, unordered_map<int,int>& memo){
        if(currentStair == targetStair){
            return 1;
        }else if( currentStair > targetStair){
            return 0;
        }

        if(memo.find(currentStair)!=memo.end()){
            return memo[currentStair];
        }

        int oneJump = countSteps(currentStair+1, targetStair, memo);
        int twoJump = countSteps(currentStair+2, targetStair, memo);

        int output = oneJump + twoJump;
        memo[currentStair]=output;
        return output;
    }

};