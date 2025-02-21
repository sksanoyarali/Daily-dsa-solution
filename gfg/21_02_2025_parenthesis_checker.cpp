class Solution {
    bool mathched(char tp,char ch){
        if(tp=='(' && ch==')' || tp=='{' && ch=='}' || tp=='[' && ch==']'){
            return true;
        }
        return false;
    }
  public:
    bool isBalanced(string& s) {
        // code hereint
        int n=s.size();
        if(n%2==1) return false;//odd brackets can never be well formed
        stack<char> st;
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(ch=='(' || ch=='{' || ch=='['){
                st.push(ch);
            }
            else{
                if(st.empty() || !mathched(st.top(),ch)){
                    return false;
                }
                else{
                    st.pop();
                }
            }
        }
        return st.empty();
    }
};