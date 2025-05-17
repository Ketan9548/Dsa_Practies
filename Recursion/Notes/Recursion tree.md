# Recursion tree

                       (1,3)
                       /
                      /
                    (2,3) condition(2>3) (false)
                    /
                   /
                (3,3) condition(3>3) (false)
                /
               /
            (4,3) condition(4>3) (true) return

// print n number of time name

                      (1,3) print(1)
                       /
                      /
                    (2,3) condition(2>3) (false) print(2)
                    /
                   /
                (3,3) condition(3>3) (false)  print(3)
                /
               /
            (4,3) condition(4>3) (true) return

// print the value in 1 to n

            (4) condition(4 == 1) (false) 4 + calculatedsum(3)
            /
           /
         (3) condition (3 == 1) (false) 3 + calculatedsum(2)
         /
        /
      (2) condition (2 == 1) (false) 2 + calculatedsum(1)
      /
     /
   (1) condition (1 == 1) (true) return 1 


now calculated val = calculatedsum(1) returns 1

                     alculatedsum(2) returns 2 + 1 = 3

                     calculatedsum(3) returns 3 + 3 = 6

                     calculatedsum(4) returns 4 + 6 = 10
