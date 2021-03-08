Input:
1	"Dhruva"	90
2	"Dhruvathi"	80
3	"John"	45
5	"Ram"	75
6	"Shyam"	65
7	"Sonu"	50
8	"Raghu"	30
9	"Dhruthi"	95
10	"Swathi"	75

Query:
select id, name, marks ,
 CASE 
    WHEN marks > 90 then 'A+' 
    WHEN marks > 70 then 'A'
    WHEN marks > 50 then 'B'
    WHEN marks >= 40 then 'C'
    ELSE 'Fail'
  END AS Grade_details 
FROM public.student 
ORDER BY marks DESC;

output:
9	"Dhruthi"	95	"A+"
1	"Dhruva"	90	"A"
2	"Dhruvathi"	80	"A"
10	"Swathi"	75	"A"
5	"Ram"		75	"A"
6	"Shyam"		65	"B"
7	"Sonu"		50	"C"
3	"John"		45	"C"
8	"Raghu"		30	"Fail"

