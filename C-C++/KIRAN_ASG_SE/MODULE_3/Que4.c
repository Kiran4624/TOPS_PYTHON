#include <stdio.h>

int main() {
    int choice;
    float radius, base, height, area,length,breadth;

    printf("1. Calculate the area of a circle\n");
    printf("2. Calculate the area of a triangle\n");
     printf("3. Calculate the area of a ractangle\n");
printf("Enter your choice (1 or 2 or 3): ");
    scanf("%d", &choice);
     switch (choice) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            printf("The area of the circle is: %f\n", area);
            break;
        case 2:
            printf("Enter the base of the triangle: ");
            scanf("%f", &base);
            printf("Enter the height of the triangle: ");
            scanf("%f", &height);
            area = 0.5 * base * height;
            printf("The area of the triangle is: %f\n", area);
            break;
            
  
        case 3: 
           printf("Enter length :");
           scanf("%d",&length);
           printf("Enter breadth :");
           scanf("%d",&breadth);
           area=length*breadth;
           printf("Area of rectangle:%dn",area);
           break; 
 
         default:
            printf("Invalid choice\n");
            break;
    }
}    
 
















































 