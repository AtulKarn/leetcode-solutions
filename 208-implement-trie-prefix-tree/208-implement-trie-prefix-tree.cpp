class TrieNode{
public:
    bool end;
    TrieNode *children[26];
    TrieNode(){
        end = false;
        memset(children, 0, sizeof(children));
    }
};

class Trie {
private:
    TrieNode* root;
public:
    Trie() {
        root = new TrieNode();
    }
    
    ~Trie(){
        clear(root);
    }
    
    void clear(TrieNode* root){
        for(int i=0;i<26;i++){
            if(root->children[i])   clear(root->children[i]);
        }
        delete root;
    }
    
    void insert(string word) {
        TrieNode* node = root;
        for(char c:word){
            if (!node->children[c-'a'])
                node->children[c-'a'] = new TrieNode();
            node = node->children[c-'a'];
        }
        node->end = true;
    }
    
    bool search(string word) {
        TrieNode* node = root;
        for(char c:word){
            if (!node->children[c-'a'])
                return false;
            node = node->children[c-'a'];
        }
        return node && node->end;
    }
    
    bool startsWith(string prefix) {
        TrieNode* node = root;
        for(char c:prefix){
            if (!node->children[c-'a'])
                return false;
            node = node->children[c-'a'];
        }
        return node;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */