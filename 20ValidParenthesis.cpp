class Solution {
public:
    bool isValid(string s) {
        
        int size=s.length();
        stack<char> st;
        int i=0;
        while(i<size)
        {  
            char temp=s[i];
            if(temp=='('||temp=='{'||temp=='[')
            {
                st.push(temp);
            }
            else
            {
                if(st.empty())
                {
                    return false;
                }
                else
                {
                    if(temp==')' && st.top()=='(')
                    {
                        st.pop();
                    }
                    else if(temp==']' && st.top()=='[')
                    {
                        st.pop();
                    }
                    else if(temp=='}' && st.top()=='{')
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
            }
            i++;
        }

        if(st.empty())
        {
            return true;
        }
        return false;
    }
};