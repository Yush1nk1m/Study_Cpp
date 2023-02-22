#include <set>
#include <iostream>
using namespace std;

int main()
{
    set<int> st;
    st.insert(20);
    st.insert(14);
    st.insert(18);
    st.insert(22);
    st.insert(76);

    cout << *(st.find(18)) << endl;
    cout << *(st.find(22)) << endl;

    return 0;
}