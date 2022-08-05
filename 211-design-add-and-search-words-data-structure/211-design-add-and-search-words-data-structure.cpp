struct node{
    bool endmark;
    struct node* child[26];
    node(){
        endmark = false;
        for(int i=0; i<26 ; i++){
            child[i] = NULL;
        }
    }
};

node* root;


class WordDictionary {
public:
    WordDictionary() {
        root = new node();
    }
    
    void addWord(string word)
    {
        node* cur = root;
        int len = word.length();
        for(int i=0; i<len; i++)
        {
            int id = word[i]-'a';
            if(cur->child[id] == NULL)
                cur->child[id] = new node();
            
            cur = cur->child[id];
        }
        cur->endmark = true;
    }
    
   bool recursiveSearch(node *head, string &word, int index)
   {
      
       if(head == NULL)
           return false;
       if(word[index] == '\0')
           return head->endmark;
       
       if(word[index] == '.')
       {
           for(int i=0;i<26;i++)
           {
               if(recursiveSearch(head->child[i], word, index+1))
                   return true;
           }
           return false;
       }
       else
       {
           int id = word[index] - 'a';
           return recursiveSearch(head->child[id], word, index+1);
       }
           
   }
    
    bool search(string word) {
        return recursiveSearch(root, word, 0);
    }
};
