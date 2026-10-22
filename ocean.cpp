#include <iostream>
#include <utility>
#include <vector>
#include <random>

// TODO: fix brown noise (add lfilter)
// TODO: fix wave envelope (finish the function)

const int SAMPLE_RATE = 44100;
const int SECONDS = 60;
int samples = SAMPLE_RATE * SECONDS;

std::vector<double> generate_brown_noise(double a)
{
	// Establish rng. Noise is drawn from a normal distribution
	std::random_device rd;
	std::mt19937 gen(rd());
	std::normal_distribution<double> dist;

	// Get samples from distribution
	std::vector<double> collected_samples;
	for (int i = 0; i < samples; ++i)
	{
		collected_samples.push_back(dist(gen));
	}

	// Apply lfilter 
	std::vector<double> b;
	double numerator_coefficient = 1 - a;

	std::vector<double> noise;
	return noise;
}

void wave_envelope(std::pair<int, int> period, double floor)
{
	// Terrible approximation of np.arange
	// TODO: Fix
	// Convert each sample's index to its time in seconds
	std::vector<double> times;
	// Starts at 1 to avoid division by zero
	for (int i = 1; i <= samples; ++i)
	{
		times.push_back(i / SAMPLE_RATE);
	}

	// Create envelope
	std::vector<double> envelope;
	for (int i = 0; i < samples; ++i)
	{
		envelope.push_back(floor);
	}
}

int main()
{
	generate_brown_noise(0.98);
	return 0;
}
