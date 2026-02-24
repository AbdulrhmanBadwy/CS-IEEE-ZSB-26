-- 1 
select firstName , lastName , city , state 
from Person  p left join Address a  
on p.personId = a.personId 

--2 
select unique_id , name 
from Employees e left join EmployeeUNI eu  
on e.id = eu.id 

--3 
select customer_id , count(*) count_no_trans 
from Visits v left join Transactions t 
on v.visit_id = t.visit_id 
where transaction_id is null 
group by customer_id 

-- 4 
select project_id , round(avg(experience_years),2) average_years 
from Project p left join Employee e  
on p.employee_id = e.employee_id 
group by project_id 

--5 
SELECT name
FROM SalesPerson s
WHERE NOT EXISTS (
    SELECT 1
    FROM Orders o
    JOIN Company c
    ON o.com_id = c.com_id
    WHERE c.name = 'RED'
    AND o.sales_id = s.sales_id
)

--6 
SELECT w1.id
FROM Weather w1
JOIN Weather w2
ON DATEDIFF(w1.recordDate , w2.recordDate) = 1
WHERE w1.temperature > w2.temperature;

--7
SELECT 
    start.machine_id,
    ROUND(AVG(end.timestamp - start.timestamp), 3) AS processing_time
FROM Activity start
JOIN Activity end
    ON start.machine_id = end.machine_id
   AND start.process_id = end.process_id
WHERE start.activity_type = 'start'
  AND end.activity_type = 'end'
GROUP BY machine_id;

--8
SELECT 
    s.student_id,
    s.student_name,
    sub.subject_name,
    COUNT(e.subject_name) AS attended_exams
FROM Students s
CROSS JOIN Subjects sub
LEFT JOIN Examinations e
    ON s.student_id = e.student_id
   AND sub.subject_name = e.subject_name
GROUP BY 
    s.student_id,
    s.student_name,
    sub.subject_name
ORDER BY 
    s.student_id,
    sub.subject_name;

 --9
 SELECT e1.name
FROM Employee e1
JOIN Employee e2
  ON e1.id = e2.managerId
GROUP BY e1.id, e1.name
HAVING COUNT(e2.id) >= 5;

--10
SELECT 
    s.user_id,
    ROUND(
        IFNULL(
            SUM(CASE WHEN c.action = 'confirmed' THEN 1 ELSE 0 END)
            / COUNT(c.user_id),
        0)
    , 2) AS confirmation_rate
FROM Signups s
LEFT JOIN Confirmations c
    ON s.user_id = c.user_id
GROUP BY s.user_id;


--11 
SELECT s.product_id,
       s.year AS first_year,
       s.quantity,
       s.price
FROM Sales s
JOIN (
    SELECT product_id, MIN(year) AS first_year
    FROM Sales
    GROUP BY product_id
) first_sales
ON s.product_id = first_sales.product_id
AND s.year = first_sales.first_year;

--12
SELECT 
    u.user_id as buyer_id,
    u.join_date,
    COUNT(o.order_id) AS orders_in_2019
FROM Users u
LEFT JOIN Orders o
    ON u.user_id = o.buyer_id
    AND YEAR(o.order_date) = 2019
GROUP BY u.user_id, u.join_date;


