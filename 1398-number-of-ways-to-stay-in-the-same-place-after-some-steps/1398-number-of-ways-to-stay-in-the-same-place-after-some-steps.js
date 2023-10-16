/**
 * @param {number} steps
 * @param {number} arrLen
 * @return {number}
 */
var numWays = function(steps, arrLen) {
    const MOD = 1000000007;

    const maxIndex = Math.min(Math.floor(steps / 2), arrLen - 1);

    const dp = Array.from({ length: 2 }, () => Array(maxIndex + 1).fill(0));
    dp[0][0] = 1;

    for (let step = 1; step <= steps; step++) {
        const current = step % 2;
        const prev = (step - 1) % 2;

        for (let index = 0; index <= maxIndex; index++) {
            dp[current][index] = dp[prev][index] % MOD;

            if (index > 0) {
                dp[current][index] = (dp[current][index] + dp[prev][index - 1]) % MOD;
            }

            if (index < maxIndex) {
                dp[current][index] = (dp[current][index] + dp[prev][index + 1]) % MOD;
            }
        }
    }

    return dp[steps % 2][0];
};