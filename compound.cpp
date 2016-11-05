#include <cstdio>
#include <cstdlib>
#include <iostream>

int main(int argc, char **argv)
{
    float dep;
    int periods;
    float interest;
    float total;
    float total_no_interest;
    int i;

    if(argc != 5) {
	std::cerr << argv[0] << " initial dep periods periodmultiplier\n";
	exit(EXIT_FAILURE);
    }

    total_no_interest = total = atof(argv[1]);
    dep = atof(argv[2]);
    periods = atoi(argv[3]);
    interest = atof(argv[4]);

    for(i = 0; i < periods; i++) {
        float taxed = total * interest - total;
        total = total + taxed + dep; // Could reduce "taxed" here
        total_no_interest = total_no_interest + dep;
    }

    std::cout << total_no_interest << " " << total << std::endl;

    exit(EXIT_SUCCESS);
}
