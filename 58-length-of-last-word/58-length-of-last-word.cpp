class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        string lastWord;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ' and s[i + 1] != ' ' and i + 1 < s.size())
                lastWord.clear();

            else if (s[i] != ' ')
                lastWord.push_back(s[i]);
        }
        return lastWord.size();
    }
};