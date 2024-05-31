// week15-3.c
// LeetCode 1208. Get Equal Substrings Within Budget  寫到一半
int equalSubstring(char* s, char* t, int maxCost) {
    int ans = 0;

    int N = strlen(s); //先知道字串長度
    for(int i=0; i<N; i++){
        printf("%c %c\n", s[i], t[i]); //字串陣列
    }
    return ans //課堂作業1, 隨便給個0當答案(答案當然不對)
}