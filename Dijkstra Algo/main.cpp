#include <iostream>
#include <vector>

using namespace std;

int main()
{
    freopen("test1.txt","r",stdin);
    vector<int> edges;
    int n;
    cout << "Number of Horizontal Verticies: \n";
    cin >> n;
    for(int i = 0; i < (2*n*(n-1)); i++)
    {
        int a;
        cin >> a;
        edges.push_back(a);
    }
    /*
    for(int i = 0; i < (2*n*(n-1)); i++)
    {
        cout << edges[i] << "\n";
    }
    */
    
    
    return 0;
}

