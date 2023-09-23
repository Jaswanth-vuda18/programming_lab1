#include<iostream>
#include "AdjacencyMatrix.h"
#include "Array.h"
#include "Queue.h"
#include "Stack.h"
#include<cmath>

using namespace std;

long long int nCr(int n, int r){
    double sum = 1;
    // Calculate the value of n choose r using the binomial coefficient formula
    for(int i = 1; i <= r; i++){
        sum = sum * (n - r + i) / i;
    }
    return (long long int)sum;
}

long long int calculate(int x){ // to calculate n(n-1)
    
    // Calculate the discriminant (b^2 - 4ac) of the quadratic equation
    double discriminant = 1 + 4 * x;
    long long int res = -1;

    if (discriminant >= 0) {
        // Calculate the two possible solutions for n
        double solution1 = (-1 + sqrt(discriminant)) / 2;
        double solution2 = (-1 - sqrt(discriminant)) / 2;

        res = (long long int)max(solution1,solution2);
    }
    return res;
}

void Bfs_Or_Dfs_Forest(AdjacencyMatrix<int> adjMatrix,Array<int> visited, int V, int E, int src){
	#ifdef BFS
    Queue<int> q;
	q.push(src);
	visited[src] = 1;
    cout << "BFS of given graph : \n";
	while(!q.isEmpty()){
		int t = q.front();
		//res.addElement(t);
		cout << t << " ";
		q.pop();
		visited.setElement(t,1);
		
		for(int i=0;i<V;i++){
			if(adjMatrix.getArray(t).getElement(i) == 1 && visited[i] == 0){
				q.push(i);
				visited[i] = 1;
			}
		}
	}
	cout<<endl;

    #else
    Stack<int> st;
	st.push(src);
	visited[src] = 1;
    cout << "DFS of given graph : \n";
	cout << src <<" ";
	while(!st.isEmpty()){
		int t = st.top();
		int flag = 0;
		
		for(int i=0;i<V;i++){
			if(adjMatrix.getArray(t).getElement(i) == 1){
				if(visited[i] == 0){
					visited[i] = 1;
					st.push(i);
					cout<< i << " ";
					flag++;
					break;
				}
			}
		}
		if(flag == 0)
			st.pop();
	}
	cout<<endl;
    #endif
}

void DFS_recursive(AdjacencyMatrix<int> adjMatrix,Array<int> visited, int V, int E, int src){
    
    visited[src] = 1;
    if(src == 0){
        cout << "\nDFS(recursive) of given graph: "<<endl;
    }
    cout << src << " ";

    for(int i=0;i<V;i++){
        if(adjMatrix.getArray(src).getElement(i) == 1){
            if(visited[i] == 0){    
                DFS_recursive(adjMatrix,visited,V,E,i);
            }
        }
    }
}

int main(){
    int N = 8, M = 10; // N - no.of vertices, M - no.of Edges
    srand(time(NULL));

    int opt;
    cout << "1 - VarM: Fixed N and variable M.\n2 - VarN: Fixed Sparsity M and variable N (nodes)."<<endl;
    cin >> opt;
    switch(opt){
        case 1:{
            N = rand()%800 + 200;

            int t = 10;
            while(t--){
                AdjacencyMatrix<int> adj(N); //adjacency matrix
                Array<int> visited1(N);
                Array<int> visited2(N);
                M = (rand()%(nCr(N,2) - (2*N) + 1)) + (2*N);

                for(int i=0;i<M;i++){
                    int a = rand()%N;
                    int b = rand()%N;
                    while(a == b){
                        b = rand()%N;
                    }
                    adj.addEdge(a,b);
                }
                cout << "N = "<<N<<", M = "<<M<<endl;
                Bfs_Or_Dfs_Forest(adj,visited1, N, M, 0);
                DFS_recursive(adj,visited2,N,M,0);
                cout<<"\n"<<endl;
            }
            break;
        }
        case 2:{

            // M = (rand()%(nCr(N,2) - (2*N) + 1)) + (2*N);
            M = rand()%1000 + 200;
            int t = 10;
            while(t--){
                int lb = M/2;
                int ub = calculate(2*M);
                N = (rand()%(ub-lb+1)) + lb;

                AdjacencyMatrix<int> adj(N); //adjacency matrix
                Array<int> visited1(N);
                Array<int> visited2(N);

                for(int i=0;i<M;i++){
                    int a = rand()%N;
                    int b = rand()%N;
                    while(a == b){
                        b = rand()%N;
                    }
                    adj.addEdge(a,b);
                }

                cout << "N = "<<N<<", M = "<<M<<endl;
                Bfs_Or_Dfs_Forest(adj,visited1, N, M, 0);
                DFS_recursive(adj,visited2,N,M,0);
                cout<<"\n"<<endl;
            }
            break;
        }
        default:{
            cout << "Please check your input !!" <<endl;
            break;
        }
    }

    // AdjacencyMatrix<int> adj(N); //adjacency matrix
    // adj.addEdge(0,1);
    // adj.addEdge(0,3);
    // adj.addEdge(1,2);
    // adj.addEdge(3,4);
    // adj.addEdge(3,7);
    // adj.addEdge(4,5);
    // adj.addEdge(4,6);
    // adj.addEdge(4,7);
    // adj.addEdge(5,6);
    // adj.addEdge(7,6);

    // Array<int> visited(N);
    
    // // Bfs_Or_Dfs_Forest(adj,visited,V,E,0);

    // cout << "DFS(recursive) of given graph: ";
    // DFS_recursive(adj,visited,N,M,0);
}
