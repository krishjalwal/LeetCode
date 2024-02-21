class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        while (n != 0) {
            bool planted = false;
            for (int i = 0; i < flowerbed.size(); i++) {
                if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)) {
                    flowerbed[i] = 1;
                    n--;
                    planted = true;
                    if (n == 0) // No need to continue if all flowers are planted
                        break;
                }
            }
            if (!planted) // No more suitable spots to plant
                break;
        }
        return n == 0;
    }
};
