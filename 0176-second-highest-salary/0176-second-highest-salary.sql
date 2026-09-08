# Write your MySQL query statement be
select MAX(salary) as SecondHighestSalary from (select salary, DENSE_RANK() OVER (ORDER BY salary DESC) as x from Employee) as t where x=2;