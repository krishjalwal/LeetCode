class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps = 0;
        int water = capacity; // Current water level in the watering can
        int n = plants.size();

        for (int i = 0; i < n; ++i) {
            if (plants[i] <= water) { // If the plant can be watered without refilling
                water -= plants[i]; // Water the plant
            } else { // Refill the watering can and water the plant
                steps += (i * 2); // Steps needed to walk to the river and back
                water = capacity - plants[i]; // Refill the watering can
            }
            steps += 1; // Step to water the plant
        }

        return steps;
    }
};
