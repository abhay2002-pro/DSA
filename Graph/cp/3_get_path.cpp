#include<iostream>
#include<vector>
#include<queue>
#include<map>
using namespace std;
vector<int> get_pathDFS(int** arr, int v, bool* visited, int current_vertex, int v2)
{
	if (current_vertex == v2)
	{
		vector<int>ans;
		ans.push_back(current_vertex);
		return ans;
	}
	for (int i = 0; i < v; i++)
	{
		if (!visited[i] && i != current_vertex && arr[current_vertex][i] == 1)
		{
			vector<int>ans;
			visited[i] = true;
			ans = get_pathDFS(arr, v, visited, i, v2);
			if (ans.size() != 0)
			{
				ans.push_back(current_vertex);
				return ans;
			}
		}
	}
	vector<int>ans;
	return ans;
}

vector<int> get_pathBFS(int** edges, int v, bool* visited, int v1, int v2){
	queue<int> pendingVertices;
	pendingVertices.push(v1);
	visited[v1] = true;
	map<int,int> mp;

	while(!pendingVertices.empty()){
		int curr = pendingVertices.front();
		pendingVertices.pop();
		if (pendingVertices.empty())
		{
			vector<int> ans;
			return ans;
		}
		
		if(curr == v2){
			break;
		}
		for(int i = 0; i < v; i++){
			if(i!=curr && !visited[i] && edges[curr][i]){
				pendingVertices.push(i);
				visited[i] = true;
				mp[i] = curr;
			}
		}
		
	}
	int i = v2;
	vector<int> ans;
	ans.push_back(i);
	while(i!=v1){
		ans.push_back(mp[i]);
		i=mp[i];
	}
	return ans;
}


int main()
{
	int v, e;
	cin >> v >> e;
	int** arr = new int* [v];
	for (int i = 0; i < v; i++)
	{
		arr[i] = new int[v];
		for (int j = 0; j < v; j++)
		{
			arr[i][j] = 0;
		}
	}
	bool* visited = new bool[v];
	for (int i = 0; i < v; i++)
	{
		visited[i] = false;
	}
	while (e--)
	{
		int a, b;
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	int v1, v2;
	cin >> v1 >> v2;
	
	visited[v1] = true;
	vector<int>ans=get_pathBFS(arr, v, visited, v1, v2);
	if (ans.size() != 0)
	{
		for (int i = 0; i < ans.size(); i++)
		{
			cout << ans[i] << " ";
		}
	}
	else
	{
		return 0;
	}
}