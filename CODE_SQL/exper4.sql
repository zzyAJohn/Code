create table 部门(
部门号 char(4) not null primary key,
部门名 char(20)
)

create table 职工(
职工号 char(4) not null primary key,
姓名 char(20),
性别 char(2),
年龄 smallint,
部门号 char(4)
foreign key(部门号) references 部门(部门号)
)

exec sp_addlogin 'logintest','','qixin'

exec sp_adduser 'logintest','logintest'

select * from 职工

grant select on 职工 to logqixin

revoke select on 职工 to logqixin

exec sp_addlogin 'test','','qixin'
exec sp_adduser 'test','test'

create view 职工_年龄 as 
select * from 职工
where 年龄>=40

grant select on 职工_年龄 to test

exec sp_addrole 'student'

create view 职工_角色 as 
select 职工号,姓名 from 职工

grant select on 职工_角色 to student

exec sp_addlogin 'test'
exec sp_adduser 'test','test'
exec sp_addrolemember 'student','test'


