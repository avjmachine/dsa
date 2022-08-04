class Solution {
public:
    void dfs
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m = image.size();
        int n = image[0].size();
        int orig_color = image[sr][sc];
        
        image[sr][sc] = color;
        
        if ((sr>0) && (image[sr-1][sc] == orig_color) && (image[sr-1][sc] != color)){
                image = floodFill(image, sr-1, sc, color);
            }
        if ((sr<m-1) && (image[sr+1][sc] == orig_color) && (image[sr+1][sc] != color)){
                image = floodFill(image, sr+1, sc, color);
            }
        if ((sc>0) && (image[sr][sc-1] == orig_color) && (image[sr][sc-1] != color)){
                image = floodFill(image, sr, sc-1, color);
            }
        if ((sc<n-1) && (image[sr][sc+1] == orig_color) && (image[sr][sc+1] != color)){
                image = floodFill(image, sr, sc+1, color);
            }
        return image;
    }
};

// above solution can be refactored using a separate method
// and thereby improve readability and reduce size of conditional statements