Question -2 
Input->
1	"Frances White"	"USA"	200350
2	"Carolyn Bradley"	"UK"	15354
3	"Annie Fernandez"	"France"	359200
4	"Ruth Hanson"	"Albania"	1060
5	"Paula Fuller"	"USA"	14789
6	"Bonnie Johnston"	"China"	100243
7	"Ruth Gutierrez"	"USA"	998999
8	"Ernest Thomas"	"Canada"	500500
10	"Anne Harris"	"USA"	158367
9	"Joe Garza"	"USA"	18782
11	"Anne Harris"	"USA"	158368
12	"Ernest Thomas"	"Canada"	500501
13	"Ernest Thomas"	"Canada"	500511
14	"Ernest Thomas"	"USA"	500611
15	"Joe Garza"	"USA"	18784
16	"Joe Garza"	"USA"	18784

Query->SELECT "ID", "Name"	FROM public.customer ORDER BY "Name" DESC, "ID" ASC;

Output->
4	"Ruth Hanson"
7	"Ruth Gutierrez"
5	"Paula Fuller"
9	"Joe Garza"
15	"Joe Garza"
16	"Joe Garza"
1	"Frances White"
8	"Ernest Thomas"
12	"Ernest Thomas"
13	"Ernest Thomas"
14	"Ernest Thomas"
2	"Carolyn Bradley"
6	"Bonnie Johnston"
3	"Annie Fernandez"
10	"Anne Harris"
11	"Anne Harris"