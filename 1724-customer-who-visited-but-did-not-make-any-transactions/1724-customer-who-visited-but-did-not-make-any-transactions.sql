# Write your MySQL query statement below
select t1.customer_id, count(*) as count_no_trans from Visits t1 left join Transactions as t2 on t1.visit_id = t2.visit_id where transaction_id is  null group by t1.customer_id;
