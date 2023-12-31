//Program to demonstrate use of the stack template class from the STL.
#include <iostream>
#include <stack>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::stack;
using std::vector;

int main()
{
    stack<char, vector<char>> s;

    cout << "Enter a line of text:\n";
    char next;
    cin.get(next);
    while (next != '\n')
    {
        s.push(next);
        cin.get(next);
    }

    cout << "Written backward that is:\n";
    while ( ! s.empty() )
    {
        cout << s.top();
        s.pop();
    }
    cout << endl;

    // Stack has no iterator
    //auto it = s.begin();
    //cout << *it << endl;

    return 0;
}