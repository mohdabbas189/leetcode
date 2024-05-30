
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        if (flowerbed[0] == 0) {
            count++;
            flowerbed[0] = 1;
        }
        for (int i = 1; i < flowerbed.size(); i++) {
            if (flowerbed[i - 1] + flowerbed[i] == 0) {
                count++;
                flowerbed[i] = 1;
            }
            if (flowerbed[i - 1] + flowerbed[i] == 2) {
                count--;
            }
        }
        if (count >= n)
            return true;
        return false;
    }
};
