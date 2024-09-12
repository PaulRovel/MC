#include "utils.h"
#include <random>
#include <numeric>

int draw_from_array(const std::vector<double>& weights)
{
    // Step 1: Calculate the total sum of the weights
    double total_weight = std::accumulate(weights.begin(), weights.end(), 0.0);
    
    // Step 2: Generate a random number between 0 and the total weight
    std::random_device rd; // Non-deterministic random number generator
    std::mt19937 gen(rd()); // Seed Mersenne Twister generator
    std::uniform_real_distribution<> dist(0.0, total_weight); // Uniform distribution between 0 and total_weight
    double random_value = dist(gen);
    
    // Step 3: Iterate through the weights and find where the random value falls
    double cumulative_weight = 0.0;
    for (int i = 0; i < weights.size(); ++i) {
        cumulative_weight += weights[i];
        if (random_value < cumulative_weight) {
            return i; // Return the index corresponding to the selected weight
        }
    }
    
    return -1; // Fallback case, should never happen
}
