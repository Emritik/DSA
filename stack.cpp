// 1. Push() -> insert O(1)
// 2. Pop() -> delete O(1)
// 3. top() -> retrun top element O(1)
// 4. empty() -> 0 / 1 O(1)
// 5. size() -> total elements O(1)
// stack -> LIFO (Last In First out)
// iostream -> cin,cout;
// stack - > stack
#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(20);
    st.push(10);
    st.push(30);
    //cout<<st.top()<<endl;
    //st.pop();
    //cout<<st.empty()<<endl;
    //cout<<st.size();
    while(!st.empty()){
        cout<<"Top element of Stack is: "<<st.top()<<endl;   
        st.pop();
    }
    cout<<"Now stack is empty!!"<<endl;
    return 0;
}