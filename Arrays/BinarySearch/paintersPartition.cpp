bool isPossible(vector<int>& boards, int n, int k, int mid) {
    int pntrCnt = 1;
    int timeSum = 0;
    for (int i = 0;i < n;i++) {
        if (timeSum + boards[i] <= mid) {
            timeSum += boards[i];
        }
        else {
            pntrCnt++;
            if (pntrCnt > k || boards[i] > mid) {
                return false;
            }
            timeSum = boards[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int>& boards, int k)
{
    //    Write your code here.
    int s = boards[0];
    int sum = 0;
    int ans = -1;
    int n = boards.size();
    for (int i = 0;i < n;i++) {
        sum += boards[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    while (s <= e) {
        if (isPossible(boards, n, k, mid)) {
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}