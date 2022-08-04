# Approach used for graph problems - easy level

1. flood_fill (leetcode-733)
approach: use DFS - filter out valid cells/pixels based on boundary and non-visited/to-be-modified colors
tips: second filter based on to-be modified colours - non-visited pixels restricts the recursion from being infinite and prevents stack overflow