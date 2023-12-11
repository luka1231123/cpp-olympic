//made by luka rekhviashvili

#include <iostream>
#include <vector>
#include<cstdlib>


using namespace std;

struct Snode
{
    bool val;
    struct Snode* left, *right, *up, *down;;
    Snode(bool val){
        this->val = val;
        left = right = up = down = NULL;
    }
};

int main()
{
    Snode* root = new Snode(true);
    
    int ranVar=0;
    root->up = new Snode(true);
    //root->up->down = new Snode(true);
    cout<<root->up->val;
    vector<vector<int>> v(30, vector<int>(30));
    for(int i=0; i<30; i++)
    {
        for(int j=0;j<30;j++)
        {
            v[i][j]=0;
            ranVar  = rand() % 5;
            if(ranVar==1){
                
            }
        }
    }
    delete root;
    delete root->up;
    
    return -1;
}
