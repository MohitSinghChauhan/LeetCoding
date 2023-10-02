class Solution {
private:
    vector<string> split(string s){
        vector<string> output;
        string word;
        for(int i=0; i<s.size(); ++i){
            
            if(s[i]==' '){
                output.push_back(word);
                word="";
                continue;
                
            }

            word+=s[i];

        }
        if(word!="")
          output.push_back(word);
        return output;
    }
public:
    string reverseWords(string s) {
        vector<string> splittedStr = split(s);
        for(auto a : splittedStr){
            cout<<a<<endl;
        }
        string ans= "";
        for(auto str : splittedStr){
            reverse(str.begin(), str.end());
            ans+=str;
            ans+=' ';
        }
        ans.pop_back();
        return ans;
    }
};