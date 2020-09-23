class Solution {
public:
    string reorderSpaces(string text) {
        string temp = "";
        vector<string> words;
        int space = 0;
        
        for(int i = 0; i < text.length(); i++){
            if(text[i] == ' '){
                space++;
                if(!temp.empty()) words.push_back(temp);
                temp = "";
            }else{
                temp += text[i];
                if(i == text.length()-1) words.push_back(temp);
            }
        }
        
        temp = "";
        int numWords = (int)words.size();
        int tot = 0;
        int between;
        if(numWords > 1) between = space/(numWords-1);
        else between = space/numWords;
        
        for(string s : words){
            temp += s;
            for(int i = 1; (i <= between) && (tot < space); i++) temp += ' ', tot++;
        }
        
        return temp;
    }
};
