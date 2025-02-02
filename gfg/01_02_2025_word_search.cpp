class Solution {
    bool solve(int ind,int row,int col,vector<vector<char>>& mat,
    string& word,vector<vector<int>> &vis,int n,int m){
        if(ind==word.size()){
            return true;
        }
        int delrow[]={0,+1,0,-1};
        int delcol[]={+1,0,-1,0};
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol]  && mat[nrow][ncol]==word[ind]){
                vis[nrow][ncol]=1;
                if(solve(ind+1,nrow,ncol,mat,word,vis,n,m)){
                    return true;
                }
                else{
                    vis[nrow][ncol]=0;
                }
            }
        }
        return false;
    }
  public:
    bool isWordExist(vector<vector<char>>& mat, string& word) {
        // Code here
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int ind=0;
                if(mat[i][j]==word[ind]){
                    vector<vector<int>> vis(n,vector<int>(m,0));
                    vis[i][j]=1;
                    if(solve(ind+1,i,j,mat,word,vis,n,m)){
                        return true;
                    }
                    else{
                        vis[i][j]=0;
                    }
                }
            }s
        }
        return false;
    }
};