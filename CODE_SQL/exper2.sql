select courseno,cname,period/16.0 as '学分'
from course

select * from student
where classno='2001'

select sname,datediff(year,birthdate,getdate()) as age
from student
where datediff(year,birthdate,getdate())>20 and sex='男'

select distinct major from teacher
where department='计算机学院'

select count(distinct studentno) as '人数'
from score
where final is not null

select studentno,sname,email
from student
where email like '%126.com%'

select studentno,count(*) as '选修课程数目',sum(final) as '总成绩'
into 学生选课统计表
from score
group by studentno
select * from 学生选课统计表

select studentno,final
from score
where courseno='c05109' or courseno='c05103' and final between '90' and '100'

select * from student
order by classno,point desc

select classno,count(studentno) as '各班人数'
from student
group by classno

select courseno,max(final) as '最高分',min(final) as '最低分'
from score
group by courseno

select teacherno,courseno,classno
from teach_class
where teacherno in(
select teacherno
from teach_class
group by teacherno
having count(courseno)>=2)

select courseno,count(studentno) as '选修人数',avg(final) '平均分'
from score
where courseno like 'c05%' and final is not null
group by courseno
having count(studentno)>=3 and avg(final)>75
order by avg(final) desc