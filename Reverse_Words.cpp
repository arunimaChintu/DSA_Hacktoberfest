
class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
       vector<string> words;
       string word = "";
       for(char c : str){
           if(c == '.'){
               words.push_back(word);
               word = "";
           }else{
               word += c;
           }
       }
        // Add the last word
        words.push_back(word);
        
        // Step 2: Reverse the list of words
        reverse(words.begin(), words.end());
        // Step 3: Join the words back together with '.'
        string result = "";
         for (int i = 0; i < words.size(); i++) {
            result += words[i];
            if (i != words.size() - 1) {
                result += ".";
            }
        }

        return result;
    }
};
