#include <iostream>
#include <utility>
#include <vector>
#include <random>

// TODO: fix brown noise (add lfilter)
// TODO: fix wave envelope (finish the function)
// TODO: Implement swept lowpass
// TODO: Write docs and methods

const int SAMPLE_RATE = 44100;

std::vector<double> generate_brown_noise(int total_samples, double a = 0.98)
{
	// Establish rng. Noise is drawn from a normal distribution
	std::random_device rd;
	std::mt19937 gen(rd());
	std::normal_distribution<double> dist;

	// Get samples from distribution
	std::vector<double> collected_samples;
	for (int i = 0; i < total_samples; ++i)
	{
		collected_samples.push_back(dist(gen));
	}

	// Apply lfilter 
	std::vector<double> b;
	double numerator_coefficient = 1 - a;

	std::vector<double> noise;
	return noise;
}

void wave_envelope(int total_samples, std::pair<int, int> period, double floor)
{
	// Terrible approximation of np.arange
	// TODO: Fix
	// Convert each sample's index to its time in seconds
	std::vector<double> times;
	// Starts at 1 to avoid division by zero
	for (int i = 1; i <= total_samples; ++i)
	{
		times.push_back(i / SAMPLE_RATE);
	}

	// Create envelope
	std::vector<double> envelope;
	for (int i = 0; i < total_samples; ++i)
	{
		envelope.push_back(floor);
	}
}

void swept_lowpass(std::vector<double> x, std::vector<double> fc, int block = 256)
{
	// Initialise new x
	std::vector<double> y;
	double y_last = 0.0;
}

std::vector<double> wave_layer(int total_samples, int f_min = 400, int f_max = 2500)
{
	std::vector<double> brown_noise = generate_brown_noise(total_samples);
	std::vector<double> envelope = wave_envelope(total_samples);
}

int linspace(double stop, double start, int limit)
{
	// Calculate the step size between two values
	// Here used for navigating a stereo field
	return (stop - start) / (limit - 1);
}

std::vector<int> ocean_sounds(int secs, int layers = 3, int seed = 42)
{
	// Set state
	int total_samples = secs * SAMPLE_RATE;
	std::vector<double> left, right;

	// Generate panning layers
	// NOTE: 0.2 and 0.8 represent far but not extreme ends of
	// the stereo field. Theta is therefore just stereo positions
	const double LEFT_LIMIT = 0.2; 
	const double RIGHT_LIMIT = 0.8;
	double step = linspace(LEFT_LIMIT, RIGHT_LIMIT, layers);

	for (double stereo_pos = LEFT_LIMIT; stereo_pos <= RIGHT_LIMIT; stereo_pos += step)
	{

	}

	std::vector<int> placeholder;
	return placeholder;
}

int main(int argc, char* argv[])
{
	// Set seconds value
	int secs = 69;
	// TODO: Implement this
	//if (argc > 1) secs = argv[1];
	//else secs = 60;
	
	return 0;
}
