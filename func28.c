#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// Function to generate random float between 0 and 1
double random_double()
{
    return (double)rand() / (double)RAND_MAX;
}

// Function to estimate pi using Monte Carlo method
double estimate_pi(int num_points)
{
    int points_inside_circle = 0;

    for (int i = 0; i < num_points; i++)
    {
        double x = random_double();
        double y = random_double();

        // Check if the point is inside the quarter circle
        if ((x * x + y * y) <= 1)
        {
            points_inside_circle++;
        }
    }

    // Ratio of points inside the circle to the total points
    double pi_estimate = 4.0 * (double)points_inside_circle / (double)num_points;
    return pi_estimate;
}

int main()
{
    int num_points = 100000; // Number of points to generate
    srand(time(0));          // Seed the random number generator with current time

    double pi_estimate = estimate_pi(num_points);
    printf("Estimated value of Pi with %d points: %lf\n", num_points, pi_estimate);

    return 0;
}
