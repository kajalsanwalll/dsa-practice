Algorithm Strategies!
-- 

For getting the optimal (best) solution for an Optimization Problem with Constraints and an objective( either maximum or minimum), we can use these strategies:

1. Greedy Method
2. Dynamic Programming
3. Branch and Bound


Algorithm Greedy(A,n){
    
    Solution = \0 (optimal);

    for(i=1 to n) do{

        x = Select(A,n);
        if(feasible(Solution,x)){

            Solution = (Solution U x);  // union

        }
    }
    return Solution;
}