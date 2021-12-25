#include <stdio.h>
#include <stdlib.h>

void pandemic_simulation(unsigned int initial_infected, float growth_per_iteration, float decay_per_iteration)
{
    for(int i=0;growth_per_iteration>0;i++)
    {
        if(i>9)
        {
            break;
        }
        printf("Iteration %d: %d (%f)\n", i,initial_infected,growth_per_iteration);
        growth_per_iteration-=decay_per_iteration;
        initial_infected+=growth_per_iteration*initial_infected;
    }
    printf("----------------------------\n");
}

int main()
{
    pandemic_simulation(100, 0.5, 0.1);
    // expected output
    // Iteration 0: 100 (0.500000)
    // Iteration 1: 150 (0.400000)
    // Iteration 2: 210 (0.300000)
    // Iteration 3: 273 (0.200000)
    // Iteration 4: 327 (0.100000)
    // Iteration 5: 359 (0.000000)
    pandemic_simulation(1000, 0.45, 0.05);
    // Iteration 0: 1000 (0.450000)
    // Iteration 1: 1450 (0.400000)
    // Iteration 2: 2030 (0.350000)
    // Iteration 3: 2740 (0.300000)
    // Iteration 4: 3562 (0.250000)
    // Iteration 5: 4452 (0.200000)
    // Iteration 6: 5342 (0.150000)
    // Iteration 7: 6143 (0.100000)
    // Iteration 8: 6757 (0.050000)
    pandemic_simulation(1000, 0.5, -0.03);
    // Iteration 0: 1000 (0.500000)
    // Iteration 1: 1500 (0.530000)
    // Iteration 2: 2295 (0.560000)
    // Iteration 3: 3580 (0.590000)
    // Iteration 4: 5692 (0.620000)
    // Iteration 5: 9221 (0.650000)
    // Iteration 6: 15214 (0.680000)
    // Iteration 7: 25559 (0.710000)
    // Iteration 8: 43705 (0.740000)
    // Iteration 9: 76046 (0.770000)
    // <ended after 10 interations>
    return 0;
}
