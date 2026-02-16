# Problem 1 
select product_id
from Products 
where low_fats = 'Y' and recyclable = 'Y'

## Problem 2 
select name   , population , area from World where area >=3000000 || population >= 25000000 ;

### Problem 3 
select name  from Customer where  referee_id  != 2 || referee_id is null;