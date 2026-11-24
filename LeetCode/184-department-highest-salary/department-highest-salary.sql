# Write your MySQL query statement below
SELECT Department.NAME AS Department,Employee.NAME AS Employee ,Employee.SALARY
FROM Employee JOIN Department ON Employee.departmentId=
Department.ID 
WHERE (DepartmentID,SALARY)IN(
    SELECT DepartmentID,MAX(salary )
    FROM Employee 
    GROUP BY(departmentId )
);