insert into student(studentno,sname,sex,classno,birthdate,point,phone,email)
values('1612221006','李杰','男','180501','1999-02-03','754','13456734522','lijie@sina.com')

insert into score
values('1612221006','c05109',null,null)

update student
set sex='女'
where studentno='1612221006'

delete from score
where studentno='1612221006'

delete from student
where studentno='1612221006'

if exists(select * from sysobjects where name='v_age' and type='v')
drop view v_age
go
create view v_age as
select studentno,sname,sex,birthdate,classno
from student
where YEAR(GETDATE())-YEAR(birthdate)>=18

select * from v_age

create view v_teacher as
select teacherno,tname,prof,department
from teacher
where department='计算机学院'

select * from v_teacher

create view v_course_teacher as
select x.teacherno,tname,prof,cname,classno
from teacher x,course y,teach_class z
where x.teacherno=z.teacherno and y.courseno=z.courseno

select * from v_course_teacher

insert into v_age 
values('16001211038','李静','女','2005-6-3','180802') 
go 
select * from v_age 
select * from student 

alter view v_age as 
select studentno,sname,sex,birthdate,classno 
from student 
where YEAR(GETDATE())-YEAR(birthdate)>=18 
with check option 

insert into v_age 
values('16001211039','朱琳琳','女','2000-6-3','180802') 
go 
select * from v_age 
select * from student

select * from teacher

update v_teacher
set prof='副教授'
where teacherno='t1'

select * from v_teacher

drop view v_age