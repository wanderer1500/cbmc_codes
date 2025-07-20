typedef struct {
    int age;
    char grade;
} Student;

int main() {
    Student s;
    __CPROVER_input("s.age", s.age);
    __CPROVER_input("s.grade", s.grade);

    __CPROVER_assume(s.age >= 18 && s.age <= 30);

    if (s.grade == 'F') __CPROVER_error();  // Fail on bad grade
}
