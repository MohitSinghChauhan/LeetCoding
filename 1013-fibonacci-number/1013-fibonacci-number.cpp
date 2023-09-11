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

        int currentKey = n;
        if(memo.find(currentKey)!=memo.end()){
            return memo[currentKey];
        }
        int output = utilFib(n-1, memo)+utilFib(n-2,memo);
        memo[currentKey]=output;
        return output;
    }
};