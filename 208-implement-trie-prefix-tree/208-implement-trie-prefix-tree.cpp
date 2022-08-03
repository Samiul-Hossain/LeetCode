class TrieNode{
    public:
    bool isWord;
    TrieNode* children[26];
    TrieNode(){
        for(int i=0; i<26; i++) children[i] = NULL;
        isWord = false;
    }
};
class Trie {
public:
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* curr = root;;
        int k = 0;
        
        for(int i=0; word[i]; i++)
        {    
            k = word[i] - 'a';
            
            if(!curr->children[k])
            {
                curr->children[k] = new TrieNode();
            }
            curr = curr->children[k];
        }
        
        curr->isWord = true;
    }
    
    bool search(string word) {
        TrieNode* curr = root;
        int k = 0;
        
        for(int i=0; word[i]; i++){
            k = word[i] - 'a';
            if(!curr->children[k]){
                return false;
            }
            curr = curr->children[k];
        }
        return curr->isWord;
    }
    
    bool startsWith(string prefix) {
        int word_len = prefix.length();
        int k = 0;
        TrieNode *cur = root;
        
        for (int i = 0; i < word_len; i++)
        {
            k = prefix[i] - 'a';
            cur = cur->children[k];
            
            if (cur == NULL)
                return false;
        }
        
        return true;
    }
private:
    TrieNode* root;
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */