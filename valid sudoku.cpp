class Solution {
public:
    bool isvalid(int i,int j,vector<vector<char>> board)
    {
        int c=0;
        char p=board[i][j];
        for(int k=0;k<9;k++)
        {
            if(board[i][k]==p)
            {
                c++;
            }
            if(c>1)
            {
                return false;
            }
        }
        c=0;
        for(int k=0;k<9;k++)
        {
            if(board[k][j]==p)
            {
                c++;
            }
            if(c>1)
            {
                return false;
            }
        }
        c=0;
        int row=i-i%3;
        int col=j-j%3;
        for(int a=0;a<3;a++)
        {
            for(int b=0;b<3;b++)
            {
                if(board[a+row][b+col]==p)
                {
                    c++;
                }
                if(c>1)
                {
                    return false;
                }
            }
        }
        return true;
        
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                {
                    continue;
                }
                if(!isvalid(i,j,board))
                {
                    return false;
                }
            }
        }
        return true;
    }
};
