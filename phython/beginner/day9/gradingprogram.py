student_scores = {
  "Harry": 81,
  "Ron": 78,
  "Hermione": 99, 
  "Draco": 74,
  "Neville": 62,
}
# 🚨 Don't change the code above 👆

#TODO-1: Create an empty dictionary called student_grades.
student_grades={}
for i in student_scores:
    score=student_scores[i]
    if score>90:
        student_grades[i]="exellent"
    elif score>80:
        student_grades[i]="best"
    else:
        student_grades[i]="fail"

#TODO-2: Write your code below to add the grades to student_grades.👇

    

# 🚨 Don't change the code below 👇
print(student_grades)
