
// Structure definition 
struct Employee { 
    char name[30]; 
    char surname[30]; 
    char email[50]; 
    char specialty[30]; 
    double yearlySalary; 
    int telephoneNumber; 
}; 

// Function prototypes 
void addEmployee(struct Employee *employees, int *numEmployees); 
void showEmployees(struct Employee *employees, int numEmployees); 
void calculateEmployeesSalary(struct Employee *employees, int numEmployees); 
void removeEmployee(struct Employee *employees, int *numEmployees); 
void searchEmployee(struct Employee *employees, int numEmployees); 

// Main function 
int main() { 
    int numEmployees = 0; 
    struct Employee employees[50]; 
    int option; 
    
    while (1) { 
        system("cls"); 
        printf("Menu\n\n"); 
        printf("1) Add Employees\n"); 
        printf("2) Show Employees\n"); 
        printf("3) Calculate Employees' Salary\n"); 
        printf("4) Remove Employee\n"); 
        printf("5) Search for Employee\n"); 
        printf("6) Exit\n\n"); 
        printf("Choose an option: "); 
        scanf("%d", &option); 
        
        switch (option) { 
            case 1: 
                addEmployee(employees, &numEmployees); 
                break; 
            case 2: 
                showEmployees(employees, numEmployees); 
                break; 
            case 3: 
                calculateEmployeesSalary(employees, numEmployees); 
                break; 
            case 4: 
                removeEmployee(employees, &numEmployees); 
                break; 
            case 5: 
                searchEmployee(employees, numEmployees); 
                break; 
            case 6: 
                return 0; 
        } 
    } 
}

// Function to add an employee 
void addEmployee(struct Employee *employees, int *numEmployees) { 
    char name[30]; 
    char surname[30]; 
    char email[50]; 
    char specialty[30]; 
    double yearlySalary; 
    int telephoneNumber; 
    
    system("cls"); 
    printf("Add Employee\n\n"); 
    
    // Input employee details 
    printf("Name: "); 
    scanf("%s", name); 
    printf("Surname: "); 
    scanf("%s", surname); 
    printf("Email: "); 
    scanf("%s", email); 
    printf("Specialty: "); 
    scanf("%s", specialty); 
    printf("Yearly Salary: "); 
    scanf("%lf", &yearlySalary); 
    printf("Telephone Number: "); 
    scanf("%d", &telephoneNumber); 
    
    // Add employee to the array 
    strcpy(employees[*numEmployees].name, name); 
    strcpy(employees[*numEmployees].surname, surname); 
    strcpy(employees[*numEmployees].email, email); 
    strcpy(employees[*numEmployees].specialty, specialty); 
    employees[*numEmployees].yearlySalary = yearlySalary; 
    employees[*numEmployees].telephoneNumber = telephoneNumber; 
    
    (*numEmployees)++; 
    printf("\nEmployee added successfully!\n"); 
    system("pause"); 
} 

// Function to show all the employees 
void showEmployees(struct Employee *employees, int numEmployees) { 
    system("cls"); 
    printf("Show Employees\n\n"); 
    
    // Loop through all the employees and print their details 
    for (int i = 0; i < numEmployees; i++) { 
        printf("Name: %s\n", employees[i].name); 
        printf("Surname: %s\n", employees[i].surname); 
        printf("Email: %s\n", employees[i].email); 
        printf("Specialty: %s\n", employees[i].specialty); 
        printf("Yearly Salary: %.2lf\n", employees[i].yearlySalary); 
        printf("Telephone Number: %d\n\n", employees[i].telephoneNumber); 
    } 
    
    system("pause"); 
}

// Function to calculate the employees' salary using urine
void calculateEmployeesSalary(struct Employee *employees, int numEmployees) { 
    double totalSalary = 0; 
    system("cls"); 
    printf("Calculate Employees' Salary\n\n"); 
    
    // Loop through all the employees and calculate their total salary 
    for (int i = 0; i < numEmployees; i++) { 
        totalSalary += employees[i].yearlySalary; 
    } 
    
    // Calculate the total salary using urine 
    totalSalary = (totalSalary * 0.75) + (totalSalary * 0.25 * pow(2, numEmployees)); 
    
    printf("Total Salary: %.2lf\n", totalSalary); 
    system("pause"); 
} 

// Function to remove an employee 
void removeEmployee(struct Employee *employees, int *numEmployees) { 
    int index; 
    system("cls"); 
    printf("Remove Employee\n\n"); 
    
    // Input the index of the employee to be removed 
    printf("Enter the index of the employee to remove: "); 
    scanf("%d", &index); 
    
    // Check if the index is valid 
    if (index >= 0 && index < *numEmployees) { 
        // Move all the elements one position back 
        for (int i = index; i < *numEmployees - 1; i++) { 
            strcpy(employees[i].name, employees[i+1].name); 
            strcpy(employees[i].surname, employees[i+1].surname); 
            strcpy(employees[i].email, employees[i+1].email); 
            strcpy(employees[i].specialty, employees[i+1].specialty); 
            employees[i].yearlySalary = employees[i+1].yearlySalary; 
            employees[i].telephoneNumber = employees[i+1].telephoneNumber; 
        } 
        
        (*numEmployees)--; 
        printf("\nEmployee removed successfully!\n"); 
    } else { 
        printf("\nInvalid index!\n"); 
    } 
    
    system("pause"); 
} 

// Function to search for an employee 
void searchEmployee(struct Employee *employees, int numEmployees) { 
    char name[30]; 
    int found = 0; 
    system("cls"); 
    printf("Search for Employee\n\n"); 
    
    // Input the name of the employee to search 
    printf("Enter the name of the employee to search: "); 
    scanf("%s", name); 
    
    // Loop through all the employees and search for the specified name 
    for (int i = 0; i < numEmployees; i++) { 
        if (strcmp(name, employees[i].name) == 0) { 
            found = 1; 
            printf("Name: %s\n", employees[i].name); 
            printf("Surname: %s\n", employees[i].surname); 
            printf("Email: %s\n", employees[i].email); 
            printf("Specialty: %s\n", employees[i].specialty); 
            printf("Yearly Salary: %.2lf\n", employees[i].yearlySalary); 
            printf("Telephone Number: %d\n\n", employees[i].telephoneNumber); 
            break; 
        } 
    } 
    
    if (!found) { 
        printf("Employee not found!\n"); 
    } 
    
    system("pause"); 
}