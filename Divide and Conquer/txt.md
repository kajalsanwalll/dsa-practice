Algorithm Strategies!
-- 

1.) Divide and Conquer

When you divide the main problem into sub-problems - the sub-problems should have the same definition as the main problem.

Divide and conquer is recursive.

Algorithm DAC(P){

    if(small(P)){
        S(P);
    }
    else{
        divide P into sub-problems P1, P2,....Pk
        Apply (DAC(P1), DAC(P2)...)
        Combine (DAC(P1), DAC(P2)...);
    }
}


Examples
--

1.) Binary Search

2.) Merge Sort