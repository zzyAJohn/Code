select courseno,cname,period/16.0 as 'ѧ��'
from course

select * from student
where classno='2001'

select sname,datediff(year,birthdate,getdate()) as age
from student
where datediff(year,birthdate,getdate())>20 and sex='��'

select distinct major from teacher
where department='�����ѧԺ'

select count(distinct studentno) as '����'
from score
where final is not null

select studentno,sname,email
from student
where email like '%126.com%'

select studentno,count(*) as 'ѡ�޿γ���Ŀ',sum(final) as '�ܳɼ�'
into ѧ��ѡ��ͳ�Ʊ�
from score
group by studentno
select * from ѧ��ѡ��ͳ�Ʊ�

select studentno,final
from score
where courseno='c05109' or courseno='c05103' and final between '90' and '100'

select * from student
order by classno,point desc

select classno,count(studentno) as '��������'
from student
group by classno

select courseno,max(final) as '��߷�',min(final) as '��ͷ�'
from score
group by courseno

select teacherno,courseno,classno
from teach_class
where teacherno in(
select teacherno
from teach_class
group by teacherno
having count(courseno)>=2)

select courseno,count(studentno) as 'ѡ������',avg(final) 'ƽ����'
from score
where courseno like 'c05%' and final is not null
group by courseno
having count(studentno)>=3 and avg(final)>75
order by avg(final) desc