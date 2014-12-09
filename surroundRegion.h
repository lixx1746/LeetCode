class Solution {
public:
    int diri[4] = { 1, -1, 0, 0 };
    int dirj[4] = { 0,  0, 1, -1 };
    void dfs(int i, int j, vector<vector<char>> &board) {
        queue<pair<int, int> > q;
        q.push(make_pair(i, j));
        while(!q.empty()) {
            pair<int, int> t = q.front(); q.pop();
            board[t.first][t.second] = 'V';
            for(int d = 0; d < 4; d++) {
                int toi = t.first + diri[d], toj = t.second + dirj[d];
                if(toi >= 0 && toi < board.size() && toj >= 0 && toj < board[0].size() && board[toi][toj] == 'O') {
                    board[toi][toj] = 'V';
                    q.push(make_pair(toi, toj));
                }
            }
        }
    }
    void solve(vector<vector<char>> &board) {
        int n = board.size();
        if(n == 0) return;
        int m = board[0].size();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if((i == 0 || j == 0 || i == n - 1 || j == m - 1) && board[i][j] == 'O')
                  dfs(i, j, board);
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(board[i][j] == 'O') board[i][j] = 'X';
                if(board[i][j] == 'V') board[i][j] = 'O';
            }
        }
    }
};
