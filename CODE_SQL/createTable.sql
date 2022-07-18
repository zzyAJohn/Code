create table course(
courseno char(6) not null primary key,
cname char(20),
type char(8),
period tinyint,
experi tinyint,
term tinyint
)

create table score(
studentno char(11) not null,
courseno char(6) not null,
daily numeric(6,2),
final numeric(6,2),
primary key(studentno,courseno)
)

create table teacher(
teacherno char(6) not null primary key,
tname char(8),
major char(10),
prof char(10),
department char(12)
)

create table class(
classno char(7) not null primary key,
classname char(12),
department char(12),
monitor char(8)
)

create table teach_class(
teacherno char(6) not null,
classno char(7) not null,
courseno char(6) not null,
primary key(teacherno,classno,courseno)
)

alter table student
add nation char(10) null


alter table student
alter column nation varchar(10)

alter table student
drop column nation