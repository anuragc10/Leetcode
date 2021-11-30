class Solution {
public:
    bool isleaf(Node* root){
        if(root->left==NULL && root->right==NULL)
        {
            return true;
        }
        else{
            return false;
        }
    }
    void addleft(Node* root,vector<int>& v)
    {
        Node* cur=root->left;
        while(cur)
        {
            if(!isleaf(cur))
            {
                v.push_back(cur->data);
            }
            if(cur->left)
            {
                cur=cur->left;
            }
            else{
                cur=cur->right;
            }
        }
    }
    void addright(Node* root,vector<int>& v)
    {
        Node* cur =root->right;
        vector<int> tmp;
        while(cur){
            if(!isleaf(cur))
            {
                tmp.push_back(cur->data);
            }
            if(cur->right)
            {
                cur=cur->right;
            }
            else{
                cur=cur->left;
            }
        }
        for(int i=tmp.size()-1;i>=0;i--)
        {
            v.push_back(tmp[i]);
        }
    }
    void addleave(Node* root,vector<int>& v)
    {
        if(isleaf(root))
        {
            v.push_back(root->data);
            return;
        }
        if(root->left)
        {
            addleave(root->left,v);
        }
        if(root->right)
        {
            addleave(root->right,v);
        }
    }
    
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> v;
        if(root==NULL)
        {
            return v;
        }
        if(!isleaf(root)){
            v.push_back(root->data);
        }
        addleft(root,v);
        addleave(root,v);
        addright(root,v);
        return v;
        
    }
    
};
