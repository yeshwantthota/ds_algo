

bool isPossible(vector<int>& stalls, int n, int k, int mid) {
    int cowCnt = 1;
    int lastPos = stalls[0];
    for (int i = 1;i < n;i++) {
        if (stalls[i] - lastPos >= mid) {
            cowCnt++;
            if (cowCnt == k) {
                return true;
            }
            lastPos = stalls[i];
        }

    }
    return false;
}
int aggressiveCows(vector<int>& stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int n = stalls.size();
    int ans = -1;
    int e = stalls[n - 1] - stalls[0];
    int mid = s + (e - s) / 2;
    while (s <= e) {
        if (isPossible(stalls, n, k, mid)) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
