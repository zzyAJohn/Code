create table chedui(
cheduihao char(4) not null primary key,
cheduiming char(20) not null
)

create table cheliang(
paizhaohao char(8) not null primary key,
changjia char(20) not null,
chuchangriqi date not null,
cheduihao char(4) not null,
foreign key (cheduihao) references chedui(cheduihao)
)

create table siji(
sijibianhao char(6) not null primary key,
xingming char(10) not null,
dianhua char(11),
cheduihao char(4) not null,
pinqi char(10) not null,
foreign key(cheduihao) references chedui(cheduihao)
)

create table shiyong(
sijibianhao char(6) not null,
paizhaohao char(8) not null,
shiyongriqi char(8) not null,
gongli char(5) not null,
foreign key(sijibianhao) references siji(sijibianhao),
foreign key(paizhaohao) references cheliang(paizhaohao)
)

alter table siji
alter column pinqi int

select * from chedui

select * from cheliang

select * from siji

select * from shiyong

select * from cheliang
order by chuchangriqi desc

select sijibianhao
from siji
where xingming = '安泽华'

select count(sijibianhao) as 司机数量
from siji

select avg(pinqi) as 平均聘期
from siji,chedui
where siji.cheduihao = chedui.cheduihao and cheduiming = '嫦娥'

select cheduiming
from chedui,siji
where chedui.cheduihao = siji.cheduihao and siji.xingming = '张智勇'

select pinqi
from siji
where siji.xingming = '安泽华'

select xingming
from siji
where sijibianhao in(
select sijibianhao
from siji
where cheduihao in(
select cheduihao
from siji
where xingming = '张智勇'))

select xingming,dianhua
from siji
where sijibianhao in(
select sijibianhao
from shiyong
where paizhaohao = 'MMSS1122')

select count(paizhaohao) as 车辆数,changjia
from cheliang
group by changjia


select avg(pinqi) as 平均聘期,cheduiming
from siji,chedui
where siji.cheduihao = chedui.cheduihao
group by cheduiming

insert
into chedui
values('0013','新增')

insert
into cheliang
values('KMSZ2845','','2022-03-24','0001')

update siji
set dianhua = 110
where sijibianhao = '202201'

delete
from chedui
where cheduiming = '新增'