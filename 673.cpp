#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch[129];
    stack<char> st;
    scanf("%s",  &ch);
    int i=0;

    while(ch[i]!='\0')
    {
        st.push(ch[i]);
        i++;
    }

    while(!st.empty())
    {
        printf("%c\n", st.top());
        st.pop();
    }
    return 0;
}
