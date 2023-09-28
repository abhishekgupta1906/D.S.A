#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
// mst
class edge
{
public:
    int v1;
    int v2;
    int w;
    edge() {}

    edge(int v1, int v2, int w)
    {
        this->v1 = v1;
        this->v2 = v2;
        this->w = w;
    }
};
bool compareedge(edge e1, edge e2)
{
    return (e1.w < e2.w);
}
void printkruskal(edge *input, int n, int e)
{
    edge *output = new edge[n - 1];
    int *parent = new int[n];
    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
        /* code */
    }
    sort(input, input + e, compareedge);
    int count = 0;
    int a = 0;
    // input ka index
    while (count != n - 1)
    {
        edge current = input[a];
        int p1 = parent[current.v1];
        int p2 = parent[current.v2];
        if (p1 != p2)
        {
            output[count] = current;
            count++;
            // parent[p1] =p2;
            parent[current.v1]= parent[current.v2];
        }
        a++;
    }
    // print format
    for (int i = 0; i < n - 1; i++)
    {
        edge current = output[i];
        if (current.v1 < current.v2)
        {
            cout << current.v1 << " " << current.v2 << " " << current.w;
        }
        else
        {
            cout << current.v2 << " " << current.v1 << " " << current.w;
        }
        
        cout << endl;

        /* code */
    }
    delete[] output;
    delete[] parent;
}
int main()
{
    int n, e;
    cin >> n >> e;
    edge*input=new edge[e];
    for(int i= 0; i<e ;i++)
    {   int s,d,w;
        cin>>s>>d>>w;
        input[i]=edge(s,d,w);
    }
    
    printkruskal(input,n,e);
    delete[]input;
    

    return 0;
}