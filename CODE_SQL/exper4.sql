create table ����(
���ź� char(4) not null primary key,
������ char(20)
)

create table ְ��(
ְ���� char(4) not null primary key,
���� char(20),
�Ա� char(2),
���� smallint,
���ź� char(4)
foreign key(���ź�) references ����(���ź�)
)

exec sp_addlogin 'logintest','','qixin'

exec sp_adduser 'logintest','logintest'

select * from ְ��

grant select on ְ�� to logqixin

revoke select on ְ�� to logqixin

exec sp_addlogin 'test','','qixin'
exec sp_adduser 'test','test'

create view ְ��_���� as 
select * from ְ��
where ����>=40

grant select on ְ��_���� to test

exec sp_addrole 'student'

create view ְ��_��ɫ as 
select ְ����,���� from ְ��

grant select on ְ��_��ɫ to student

exec sp_addlogin 'test'
exec sp_adduser 'test','test'
exec sp_addrolemember 'student','test'


