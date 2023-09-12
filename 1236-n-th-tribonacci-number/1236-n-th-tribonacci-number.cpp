class Solution {
public:
    int tribonacci(int n) {
        unordered_map<int,int> memo;
        return calTribonacciTerm(n,memo);
    }

private:
    int calTribonacciTerm(int n, unordered_map<int,int>& memo){
        if(n==0){
            return n;
        }else if(n==1 || n==2){
            return 1;
        }

        if(memo.find(n)!=memo.end()){
            return memo[n];
        }

        int output = calTribonacciTerm(n-1, memo) + calTribonacciTerm(n-2, memo) + calTribonacciTerm(n-3, memo);

        memo[n] = output;

        return output;
    }
};