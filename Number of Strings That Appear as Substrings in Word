class Solution {
    struct Node {
        Node* c[26]{};
        Node* f{};
        Node* l{};
        int n = 0;
    };

    static constexpr int mx = 10005;

public:
    int numOfStrings(vector<string>& patterns, string word) {
        Node* root = new Node();
        
        for (auto& p : patterns) {
            Node* curr = root;
            
            for (int i = 0; i < p.size(); i++) {
                int x = p[i] - 97;
                
                if (!curr->c[x])
                    curr->c[x] = new Node();
                    
                curr = curr->c[x];
            }
            
            curr->n++;
        }
        
        Node* q[mx];
        int hd = 0;
        int tl = 0;
        
        for (int i = 0; i < 26; i++) {
            if (!root->c[i]) {
                root->c[i] = root;
                continue;
            }
            
            root->c[i]->f = root;
            root->c[i]->l = nullptr;
            q[tl] = root->c[i];
            tl++;
        }
        
        while (hd < tl) {
            Node* curr = q[hd];
            hd++;
            
            for (int i = 0; i < 26; i++) {
                if (!curr->c[i]) {
                    curr->c[i] = curr->f->c[i];
                    continue;
                }
                
                curr->c[i]->f = curr->f->c[i];
                
                if (!curr->c[i]->f->n)
                    curr->c[i]->l = curr->c[i]->f->l;
                else
                    curr->c[i]->l = curr->c[i]->f;
                    
                q[tl] = curr->c[i];
                tl++;
            }
        }
        
        Node* curr = root;
        int res = 0;
        
        for (auto& w : word) {
            int x = w - 97;
            curr = curr->c[x];
            
            Node* m = curr;
            
            while (m) {
                res += m->n;
                m->n = 0;
                
                Node* tmp = m->l;
                m->l = nullptr;
                m = tmp;
            }
        }
        
        return res;
    }
};
