class Solution {
public:
    int fib(int n) {
        unordered_map<int,int> memo;
        return utilFib(n,memo);
    }

private:
    int utilFib(int n, unordered_map<int,int>& memo){
        if(n==0 || n==1)
        return n;

        if(memo.find(n)!=memo.end()){
            return memo[n];
        }
        int output = utilFib(n-1, memo)+utilFib(n-2,memo);
        memo[n]=output;
        return output;
    }
};