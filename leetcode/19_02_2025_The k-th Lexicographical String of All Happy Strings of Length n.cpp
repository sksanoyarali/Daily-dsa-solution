class Solution {
    void rec(string temp,int n,string &ans,int &counter,int k){
        if(temp.size()==n){
            counter++;
            if(counter==k){
                ans=temp;
            }
            return;
        }
        for(char ch='a';ch<='c';ch++){
            if(temp.size()==0 || temp.back()!=ch){
                rec(temp+ch,n,ans,counter,k);
            }
           
        }
    }
public:
    string getHappyString(int n, int k) {
        // vector<string> ans;
        string temp="";
        string ans="";
        int counter=0;
        rec(temp,n,ans,counter,k);
        return ans;

    }
};