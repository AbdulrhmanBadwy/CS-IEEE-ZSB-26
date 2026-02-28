-- 1 
SELECT email
FROM Person
GROUP BY email
HAVING COUNT(email) > 1;

-- 2 
delete p1 
from Person p1 join Person p2 
on p1.email = p2.email 
And p1.id > p2.id ;

-- 3 
CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
    SELECT salary
    FROM (
      SELECT salary,
             DENSE_RANK() OVER (ORDER BY salary DESC) AS rnk
      FROM Employee
    ) t
    WHERE rnk = N
    LIMIT 1
  );
END

-- 4 
SELECT 
  score,
  DENSE_RANK() OVER (ORDER BY score DESC) AS `rank`
FROM Scores
ORDER BY score DESC;

-- 5 
SELECT 
  d.name AS Department,
  e.name AS Employee,
  e.salary AS Salary
FROM Employee e
JOIN Department d
  ON e.departmentId = d.id
JOIN (
  SELECT departmentId, MAX(salary) AS max_salary
  FROM Employee
  GROUP BY departmentId
) m
ON e.departmentId = m.departmentId
AND e.salary = m.max_salary;