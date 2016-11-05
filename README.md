Compound interest calculator

Usage:

    ./compound initial_balance deposit periods multiplier

The output is two numbers; the sum of the money deposited and the balance with interest.

For a monthly-compounded account with an annual percentage, divide by 12, add to 1.0, and use that as the multiplier.

Here's an example where an initial bank account with 10000 dollars has 1000 deposited monthly for 30 years with 3% annual interest, which would be 1.0025 monthly interest.  (1.0 + .03 / 12)

    ./compound 10000 1000 360 1.0025

And the result:

    370000 607313

