#include<bits/stdc++.h>
using namespace std;

#define N 8

int safe(int x, int y, int sum[N][N])
{
    return (x>=0 && x<N && y>=0 && y<N && sum[x][y]== -1);
}

void print(int sum[N][N])
{
    for(int i=0; i<N; i++)
     for(int j=0; j<N; j++)
       cout<<" "<<sum[i][j];
}

int solve(int x, int y, int move, int sum[N][N], int x_move[N], int y_move[N])
{
    int i,x_next,y_next;

    if(move == N*N)
      return 1;

    for(i=0; i<N; i++)
    {
        x_next = x + x_move[i];
        y_next = y + y_move[i];

        if(safe(x,y,sum))
        {
            sum[x_next][y_next] = move;
            if(solve(x_next,y_next,move+1,sum,x_move,y_move) == 1)
              return 1;

            else 
             sum[x_next][y_next] = -1;
        }
    }
    return 1;

}

int solveKT()
{
    int sol[N][N];
    int i,j;

    for(i=0; i<N; i++)
     for(j=0; j<N; j++)
       sol[i][j] = -1;

    int x_move[N] = {'2','2','-2','-2','1','1','-1','-1'};
    int y_move[N] = {'1','-1','1','-1','2','-2','2','-2'};

    sol[0][0] = 0;

    if(solve(0,0,1,sol,x_move,y_move) == 0)
    {
        cout<<"solution does not exist\n";
        return 0;
    }

    else
        print(sol);

    return 1;

}

int main()
{
    solveKT();

    return 0;
}