#include <iostream>
#include <vector>

using namespace std;

const int dx[4] = {-1, 0, 1, 0};
const int dy[4] = {0, 1, 0, -1};

int dfs(vector<vector<char>> &grid, int i, int j) {
    if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] != 'T') {
        return 0;
    }
    grid[i][j] = 'W';
    int count = 1;
    for (int k = 0; k < 4; k++) {
        int x = i + dx[k];
        int y = j + dy[k];
        count += dfs(grid, x, y);
    }
    return count;
}

int largest_forest(vector<vector<char>> &grid) {
    int n = grid.size();
    int m = grid[0].size();
    int max_forest = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'T') {
                max_forest = max(max_forest, dfs(grid, i, j));
            }
        }
    }
    return max_forest;
}

int main() {
    vector<vector<char>> grid = {{'T', 'W', 'W', 'T', 'T'},
                                 {'W', 'T', 'W', 'W', 'W'},
                                 {'T', 'T', 'W', 'W', 'W'},
                                 {'W', 'W', 'W', 'T', 'T'},
                                 {'T', 'W', 'W', 'W', 'T'}};
    cout << largest_forest(grid) << endl;
    return 0;
}
