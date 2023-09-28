#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
vector<int> mergeKSortedArrays(vector<vector<int> *> input)
{
    priority_queue<int, vector<int>, greater<int>> p;
    for (int i = 0; i < input.size(); i++)
    {
        // for array index-i
        // konsa array-i
        // array me konsa element-j
        for (int j = 0; j < input[i]->size(); j++)
        {
            p.push(input[i]->at(j));

            //
            /* code */
        }

        /* code */
    }
    vector<int> v;
    while (!p.empty())
    {
        int c = p.top();
        v.push_back(c);
        p.pop();
    }
    return v;

    // Write your code here
}
int main()
{

    return 0;
}