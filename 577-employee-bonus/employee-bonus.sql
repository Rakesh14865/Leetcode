# Write your MySQL query statement below

Select e.name,b.bonus
From Employee e LEFT JOIN bonus b ON e.empId=b.empId
where b.bonus<1000 OR bonus IS NULL;