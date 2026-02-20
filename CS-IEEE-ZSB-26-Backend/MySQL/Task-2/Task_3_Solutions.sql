-- 1. 
select tweet_id from Tweets where  length(content) > 15 ;

--2. 
SELECT user_id, CONCAT(
        UPPER(LEFT(name, 1)), LOWER(SUBSTRING(name, 2))
    ) As name
FROM Users
order by user_id asc;

--3.
select employee_id , 
case 
    when employee_id %2 != 0 and name not like 'M%' then salary
    else 0
end  bonus

from Employees
order by employee_id asc; 

--4.
select patient_id , patient_name , conditions 
from Patients
where conditions like 'DIAB1%' or conditions like '% DIAB1%'; 

--5.
select event_day day , emp_id , sum(out_time) - sum(in_time) total_time 
from Employees
group by day , emp_id; 

--6.
select user_id , count(follower_id) followers_count
from Followers 
group by user_id 
order by user_id asc ; 

--7.
select date_id , make_name , count(distinct(lead_id)) unique_leads , count(distinct(partner_id)) unique_partners
from DailySales
group by date_id , make_name ; 

--8.
select actor_id , director_id 
from ActorDirector 
group by director_id , actor_id
having count(*)>=3 ;

--9.
select class 
from Courses 
group by class 
having count(student)>=5; 

--10.
select player_id , min(event_date) first_login 
from Activity
group by player_id ; 

--11.
SELECT stock_name, SUM(
        CASE
            WHEN operation = 'Sell' THEN price
            ELSE - price
        END
    ) AS capital_gain_loss
FROM Stocks
GROUP BY
    stock_name;

--12.
SELECT (
    SELECT DISTINCT salary
    FROM Employee
    ORDER BY salary DESC
    LIMIT 1 OFFSET 1
) AS SecondHighestSalary;
