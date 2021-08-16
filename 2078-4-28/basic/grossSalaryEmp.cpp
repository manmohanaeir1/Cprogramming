//C Program For Find The Gross Salary of an Employee
/*it signifies the amount paid out to an individual before any voluntary or mandatory deductions are made from it. 
Therefore, it is the total pay that an employee receives before taxes and other deductions.
 Gross salary includes income from all sources and is not confined to only the income received in cash. 
 Therefore, it also includes benefits or services received by an employee. 
 On the other hand, the salary that an employee takes home is the net salary after deductions.*/


//Gross Salary = Basic + OA + HRA ......... 
//Deduction = Gross Salary - Pf - Pt - It. 
 //Net Salary = Gross Salary - Deduction. 

//House rent allowance or HRA
//Transport Allowance 
 //Other Allowances 


 #include<stdio.h>
 #include<conio.h>
 int main()
 {
     float basicSalary,HRA,TA,OA;
     float grossSalary;
     printf("Enter basic salary = ");
     scanf("%f", &basicSalary);
     printf("Enter House rent allowance % = ");
     scanf("%f", &HRA);
     printf("Enter Other Allowances % = ");
     scanf("%f", &OA);

    //finding percentage % of 
     HRA = (basicSalary * HRA)/100;
     OA = (basicSalary * OA)/100;
     

     // gross salary
     grossSalary = basicSalary + HRA + OA;
     printf("GrossSalary = %f", grossSalary);
     return 0;

 }
