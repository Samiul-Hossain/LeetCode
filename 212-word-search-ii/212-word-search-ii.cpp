class Trie{
  public:
    string word;
    Trie* children[26];
    Trie(){
        for(int i=0; i<26; i++) children[i] = NULL;
        word = "";
    }
};
class Solution {
public:
    Solution(){
        root = new Trie();
    }
    
    void insert(string word){
        int k = 0;
        Trie* curr = root;
        for(int i=0; word[i]; i++){
            k = word[i] - 'a';
            if(!curr->children[k])
                curr->children[k] = new Trie();
            curr = curr -> children[k];
        }
        curr->word = word;
    }
    
    int R[4] = {1, -1, 0, 0};
    int C[4] = {0, 0, 1, -1};
    vector <string> ret;
    int visited[20][20];
    
    void init(int r, int c){
        for(int i=0; i<20; i++){
            for(int j=0; j<20; j++){
                visited[i][j] = 0;
            }
        }
    }
    
    void push(string word){
        int l = ret.size();
        for(int i=0; i<l; i++){
            if(ret[i] == word)
                return;
        }
        ret.push_back(word);
    }
    
    void dfs(int x, int y, Trie* curr, int r, int c, vector<vector<char>>& board){
        if(curr->word != "")
            push(curr->word);
        for(int i=0; i<4; i++){
            if(x+R[i]>=r || y+C[i]>=c || x+R[i]<0 || y+C[i]<0 || visited[x+R[i]][y+C[i]] == 1)
                continue;
            int k = board[x+R[i]][y+C[i]] - 'a';
            if(curr->children[k]){
                visited[x][y] = 1;
                dfs(x+R[i], y+C[i], curr->children[k], r, c, board);
                visited[x+R[i]][y+C[i]] = 0;
            }
        }
    }
    
    void solve(int r, int c, int x, int y, vector<vector<char>>& board){
        Trie* curr = root;
        int k = board[x][y] - 'a';
        if(curr->children[k]){
            init(r, c);
            visited[x][y] = 1;
            dfs(x, y, curr->children[k], r, c, board);
            visited[x][y] = 0;
        }
        else return;
    }
    
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        int l = words.size();
        for(int i=0; i<l; i++){
            insert(words[i]);
        }
        int r = board.size();
        int c = board[0].size();
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                solve(r, c, i, j, board);
            }
        }
        return ret;
    }
    
private:
    Trie* root;
};