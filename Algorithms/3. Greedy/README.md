# Greedy Algorithms

A greedy algorithm constructs a solution to the problem by always *making a choice that looks the best* 
at the moment. A greedy algorithm never takes back its choices, but directly constructs the final solution. 
For this reason, greedy algorithms are usually very efficient.

The difficulty in designing greedy algorithms is to find a greedy strategy that
always produces an optimal solution to the problem. The locally optimal choices
in a greedy algorithm should also be globally optimal. It is often difficult to argue
that a greedy algorithm works.

## 1. Greedy Coin Change Problem:

We are given a set of coins and our task is to form a sum of money n with minimum amount of the coins.

*Greedy algorithm:*

A simple greedy algorithm to the problem always selects the largest possible coin,
until the required sum of money has been constructed.
It turns out that if the coins are the euro coins, the greedy algorithm always
works. However, for general Coin Change Problem, Greedy approach does not guarantte correct solution. 
General Coin Change Program can be efficiently solved using a dynamic programming algorithm that always 
gives the correct answer.

## 2. Unweight Event Scheduling

Given n events with their starting and ending times, find a
schedule that includes as many events as possible.

*Algorithm 1:* Select as short events as possible.
- Counterexample: if a short interval is overlapped between two large interval, this might not be the optimal solution.

*Algorithm 2:* Select the next possible event begins as early as possible.
- Counterexample: if the earliest interval has longest interval and overlapped all the following interval, this might not be the optimal solution.

*Greedy algorithm:* 

Select the next possible event that enes as early as possible.

## 3. Tasks and deadlines

Let us now consider a problem where we are given n tasks with durations and deadlines 
and our task is to choose an order to perform the tasks.
For each task, we earn d − x points where d is the task’s deadline and x is the moment when we finish the task. 
Find the largest possible total score we can obtain:

*Greedy Algorithm:*

In an optimal solution, for any two consecutive tasks, it must hold that the shorter task comes before the longer task. 
Thus, the tasks must be performed sorted by their durations.