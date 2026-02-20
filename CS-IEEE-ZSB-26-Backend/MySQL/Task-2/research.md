# Research 

## [*Having* Vs *Where*](#having-vs-where-1)
## [*Delete* Vs *Truncate*](#delete-vs-trancate)
## [*rder of Execution*](#order-of-query)
## [*Count(\*)* Vs *Count(column_name)*](#count--vs-count-column_name)
## [*Char* Vs *Varchar*](#varchar-vs-char)

### Having Vs Where 

`Where` : Deals with the **Normal Condition in Column** like 
```sql
select * from table_Name
where Column_name >= 10 ; 
```

`Having` : Use it when you want to make Condtion on **Group functions** like *sum , count , avg ...* 
```sql 
select * from table_Name
having sum(Column_Name) >= 100 
```
----

### Delete Vs Trancate 

`Delete`
- Delete Row only 
- Can you use With where 
- Can **Rollback**

`Trancate` 
- Delete all Data 
- Cannot Use with Where 
- **Cannot Rollback**

-----

### Order of Query 

`Although` We Write Query in 
1. select 
1. from 
1. where 
1. group by 
1. having 
1. order by 

``But the engine Acutally execute different order``
1. from 
1. where 
1. group by 
1. having 
1. select 
1. order by 

FROM → WHERE → GROUP BY → HAVING → SELECT → ORDER BY

---- 

### Count (\*) Vs Count (Column_name) 

`Count(\*)`
- count all values in the Rows and ignore the null  
- cout the row it self

`Count(Column_Name)`
- count all values in this column 
- ignore the null values also 

-----

### Varchar Vs Char

`Char`
- when you define a length this length is fixed when you enter value smaller than this length will take all legth
- not Flexible 

`Varchar` 
- When you define a length and enter value small than this length will take only it's 
- Flexiable