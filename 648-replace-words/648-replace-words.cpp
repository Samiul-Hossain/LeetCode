class Solution {
public:
    
    struct trie
    {
        string word;
        trie* child[26];
        
        trie()
        {
            word = "";
            for(int i=0; i<26;i++)
                child[i] = NULL;
        }
    };
    
    trie* root;
    void addWord(string s)
    {
        trie* temp = root;
        for(int i=0; s[i];i++)
        {
            int index = s[i] - 'a';
            if(temp->child[index]==NULL)
                temp->child[index] = new trie();
            temp = temp->child[index];
        }
        temp->word = s;
    }
    
    string search(string s)
    {
        trie* temp =root;
        for(int i=0;s[i];i++)
        {
            int index = s[i]-'a';
            
            if(temp->child[index]!= NULL and temp->child[index]->word != "")
                return temp->child[index]->word;
            if(temp->child[index] == NULL)
                return "";
            temp = temp->child[index];
        }
        return temp->word;
    }
    string replaceWords(vector<string>& dictionary, string sentence) {
        root = new trie();
        vector<string> words;
        int n = sentence.size();
        int begin =0;
        int count =0;
        for(int i=0;i<=n;i++)
        {
            count++;
            if(sentence[i]==' ' or i==n)
            {
                string s = sentence.substr(begin,count-1);
                words.push_back(s);
                count = 0;
                begin = i+1;
            }
        }
        
        for(string s : dictionary)
            addWord(s);
        
        string ans ="";
        
        for(int i=0; i<words.size(); i++)
        {
            string s = search(words[i]);
            if(s!="")
                words[i] = s;
            ans += words[i];
            if(i!=words.size()-1)
                ans +=' ';
        }
        ans[ans.size()]= '\0';
        
        return ans;
       
    }
};
