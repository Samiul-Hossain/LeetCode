class TrieNode {
public:
	bool isWord;
	TrieNode* children[26];
	TrieNode() {
		for (int i = 0; i < 26; i++) children[i] = NULL;
		isWord = false;
	}
};

class Trie {
public:
	Trie() {
		root = new TrieNode();
	}

	void insert(string word) {
		TrieNode* curr = root;
		int k = 0;
		for (int i = 0; word[i]; i++) {
			k = word[i] - 'a';
			if (!curr->children[k]) {
				curr->children[k] = new TrieNode();
			}
			curr = curr->children[k];
		}
        curr->isWord = true;
	}

	bool search(string word) {
		TrieNode* curr = root;
		int k = 0;
		for (int i = 0; word[i]; i++) {
			k = word[i] - 'a';
			if (!curr->children[k])
				return false;
			curr = curr->children[k];
		}
		return curr->isWord;
	}

	bool startsWith(string prefix) {
		TrieNode* curr = root;
		int k = 0;
		for (int i = 0; prefix[i]; i++) {
			k = prefix[i] - 'a';
			curr = curr->children[k];
			if (!curr)
				return false;
		}
		return true;
	}
private:
	TrieNode* root;
};
