/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findIntersectionValues(int* arr1, int n1, int* arr2, int n2, int* rS) {
    *rS = 2;
    int c1 = 0, c2 = 0;
    int *ans = (int*)malloc(sizeof(int) * 2);
    for(int i  = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            if(arr1[i] == arr2[j]) {
                c1++;
                break;
            }
        }
    }
    for(int i  = 0; i < n2; i++){
        for(int j = 0; j < n1; j++){
            if(arr2[i] == arr1[j]) {
                c2++;
                break;
            }
        }
    }
    ans[0] = c1;
    ans[1] = c2;
    return ans;
}