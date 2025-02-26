class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>words;
        stringstream ss(s);
        string word;
        while(ss>>word)
        {
            words.push_back(word);
        }

        if(pattern.length()!=words.size())return false;

        unordered_map<char, string> charToWord;
    unordered_set<string> usedWords;

    for (int i = 0; i < pattern.length(); i++) {
        char c = pattern[i];

        // If the character already has a mapping
        if (charToWord.count(c)) {
            if (charToWord[c] != words[i]) {
                return false; 
            }
        } else {
            if (usedWords.count(words[i])) {
                return false; 
            }
            charToWord[c] = words[i];
            usedWords.insert(words[i]);
        }
    }
    return true;
 
    }
};