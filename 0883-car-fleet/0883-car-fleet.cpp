class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> cars;

        for (int i = 0; i < position.size(); i++) {
            cars.push_back({position[i], speed[i]});
        }

        sort(cars.begin(), cars.end(), [](auto &a, auto &b) {
            return a.first > b.first;
        });

        int fleets = 0;
        double lastTime = 0;

        for (auto [pos, spd] : cars) {
            double time = (double)(target - pos) / spd;
            if (time > lastTime) {
                fleets++;
                lastTime = time;
            }
        }

        return fleets;
    }
};