# Chapter 1 - Introduction

*Any App want a database to store data and retrieve it*
![[Pasted image 20260210125319.png]]
![[Pasted image 20260210125432.png]]

## File Based System

![[Pasted image 20260210125618.png]]
![[Pasted image 20260210125803.png]]

## Database 
### التعريفات 

![[Pasted image 20260210125855.png]]
![[Pasted image 20260210125920.png]]
![[Pasted image 20260210130024.png]]

### Main Components

![[Pasted image 20260210130204.png]]
![[Pasted image 20260210130337.png]]
![[Pasted image 20260210130422.png]]

### Advantages

![[Pasted image 20260210130518.png]]
![[Pasted image 20260210130555.png]]
![[Pasted image 20260210130651.png]]
![[Pasted image 20260210130717.png]]
![[Pasted image 20260210130728.png]]

### Disadvantages

![[Pasted image 20260210130811.png]]
![[Pasted image 20260210130833.png]]
![[Pasted image 20260210130921.png]]

## Database Users

### Process

![[Pasted image 20260210131459.png]]


## DBMS Architecture 
.
### Three Types of Schema

![[Pasted image 20260210131726.png]]

#### External Schema
![[Pasted image 20260210131847.png]]
#### Conceptual Schema
![[Pasted image 20260210131939.png]]

#### Physical Schema
![[Pasted image 20260210132031.png]]

### Data Models
![[Pasted image 20260210132248.png]]


## Mappings

![[Pasted image 20260210132456.png]]
![[Pasted image 20260210132546.png]]

## DBMS Other function 

![[Pasted image 20260210132803.png]]
![[Pasted image 20260210132828.png]]
![[Pasted image 20260210132906.png]]
![[Pasted image 20260210133017.png]]

## DBMS Environment

### Centralized Database Environment

![[Pasted image 20260210133322.png]]
![[Pasted image 20260210133516.png]]
![[Pasted image 20260210133640.png]]
![[Pasted image 20260210133733.png]]

### Distributed Database Environment

![[Pasted image 20260210134051.png]]

![[Pasted image 20260210134225.png]]

![[Pasted image 20260210134315.png]]
![[Pasted image 20260210134405.png]]

![[Pasted image 20260210134505.png]]

![[Pasted image 20260210134540.png]]



# Chapter 2 - Entity Relation Diagram 

## Entity Relation Diagram (ERD)

![[Pasted image 20260210155923.png]]

![[Pasted image 20260210160015.png]]

![[Pasted image 20260210160039.png]]
![[Pasted image 20260210160308.png]]
![[Pasted image 20260210160425.png]]


###  Entity Relationship Modeling 

**عشان تقدر ترسمه الدايجرام عندك لازم تسأل نفسك شوية اسئلة**

*ايه هي الكيانات المستقلة اللي عندي*
![[Pasted image 20260210160742.png]]

*ايه هي الخصائص اللي بتوصف الكيان المستقل دا*
![[Pasted image 20260210160829.png]]

*هل فيه ميزه او مجموعة من المميزات تقدر تخليلي الكيان المستقل بتاعي دا مميز عن الباقي*
![[Pasted image 20260210160934.png]]
*تبدأ تحدد العلاقات بين كل الكيانات و بعضها*
![[Pasted image 20260210161122.png]]


### Conceptual Design 

![[Pasted image 20260210161426.png]]

*Example that we work on it*
![[Pasted image 20260210161509.png]]

![[Pasted image 20260210162728.png]]
![[Pasted image 20260210162758.png]]
![[Pasted image 20260210162813.png]]

![[Pasted image 20260210162841.png]]
![[Pasted image 20260210162855.png]]
![[Pasted image 20260210162909.png]]

![[Pasted image 20260210162540.png]]






### Types of Attributes 

![[Pasted image 20260210161958.png]]
![[Pasted image 20260210162024.png]]
![[Pasted image 20260210162049.png]]
![[Pasted image 20260210162111.png]]



### Types of Entity

*ممكن تحدد ليها  unique key  في ميزه من مييزاتها بتخليها مختلفه عن الباقي او اقدر احددها بيها*
![[Pasted image 20260210163011.png]]

*بتحقق عندي شرطين 
1- وهي مفيش ولا  Attribute  من بتوعها اقدر احددها بيها 
2- وجودها معتمد اعتمادا كليا علي  Entity  تانية*
![[Pasted image 20260210163150.png]]



### Types of Keys 

![[Pasted image 20260210162709.png]]


### Relationships 

![[Pasted image 20260210160606.png]]

![[Pasted image 20260210163510.png]]
![[Pasted image 20260210164038.png]]
##### Degree of Relationship 
*العدد اللي بيشارك في العلاقة دي*
![[Pasted image 20260210164124.png]]
##### Cardinality Ratio 
*هتروح تقف عند كل  Entity  اللي موجودين في العلاقة وليكن مثلا عندنا موظف و قسم هتروح تقف عن الموظف وتسال سؤال هل الموظف بيشتغل في اكتر من قسم و لا قسم وحد طبعا قسم واحد تروح تحط واحد عن القسم و تقف عند القسم و تسال هل القسم بيشتغل فيه اكتر من موظف ولا موظف واحد ولا اكيد اكتر من موظف تروح تحط  n  عند الموظف وهكذا بقي*
![[Pasted image 20260210164312.png]]

![[Pasted image 20260210165048.png]]

##### Participation 

![[Pasted image 20260210165137.png]]
![[Pasted image 20260210165157.png]]

#### Types of Relationships 

![[Pasted image 20260210163844.png]]
*بين ال  Entity  ونفسها *
![[Pasted image 20260210163906.png]]
![[Pasted image 20260210163948.png]]
*بتكون بين ال  Strong Entity and Weak Entity , وبيكون ليها خطلين فوق بعض كدا*
![[Pasted image 20260210165708.png]]

### Final ERD
![[Pasted image 20260210170003.png]]
# Chapter 3 - ERD Mapping to Tables

## Mapping Strong and Weak Entities 

![[Pasted image 20260210172149.png]]
### Relation Database

![[Pasted image 20260210172242.png]]
*ال Row*
![[Pasted image 20260210172304.png]]
![[Pasted image 20260210172330.png]]
![[Pasted image 20260210172357.png]]
![[Pasted image 20260210172445.png]]

### How Can Convert Conceptual Design to Logical Design

`1- Create Table for Eeach Entity`
`2- Choose one of key attributes to be the primary key `
`3- Seperate Multivalue attribute in new table with Primary key of Entity as Forign key and two together is primary key `
`4- In table of weak entity must put the primary key of strong entity `

**Mapping Strong and Weak Entities**
![[Pasted image 20260210173434.png]]
## Mapping Relation Types 

*في حالة العلاقة لما تكون احادية او ثنائية سواء 1:1 او 1:N هتاخد ال  primary key بتاع اللي مش  N وتحطه  as foreign key  * ![[Pasted image 20260210173641.png]]
![[Pasted image 20260210174004.png]]
![[Pasted image 20260210174119.png]]

![[Pasted image 20260210174230.png]]

![[Pasted image 20260210174312.png]]
![[Pasted image 20260210174400.png]]

*بتتدمج الجدولين في جدول واحد*
![[Pasted image 20260210174608.png]]


![[Pasted image 20260210174755.png]]

## Conclusion 

![[Pasted image 20260210174828.png]]

![[Pasted image 20260210174909.png]]

![[Pasted image 20260210174942.png]]

![[Pasted image 20260210175046.png]]

# Chapter 3 - Structured Query Language (SQL)
