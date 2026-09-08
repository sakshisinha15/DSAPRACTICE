CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
     select Max(salary) as getNthHighestSalary from (select salary,DENSE_RANK() OVER (ORDER BY SALARY DESC) AS rankk from Employee) as t where rankk=N 

  );
END