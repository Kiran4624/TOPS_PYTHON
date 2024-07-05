"""What is Django URLs?make program to create django urls

Django URLs :

        In Django, URLs (Uniform Resource Locators) are mapped to views within your web application. 
        The URLs determine how incoming requests are routed to the appropriate views, which then generate the HTTP responses.

        In a Django project, you define URL patterns in the urls.py module of your application. 
        Each URL pattern is typically associated with a specific view function. 
        Django uses regular expressions to match incoming URLs to these patterns and then calls the corresponding view function.

create django urls :

        def generate_urls_file():
    num_patterns = int(input("Enter the number of URL patterns: "))
    
    with open("urls.py", "w") as f:
        f.write("from django.urls import path\n")
        f.write("from . import views\n\n")
        f.write("urlpatterns = [\n")
        
        for i in range(num_patterns):
            url_pattern = input(f"Enter URL pattern {i+1}: ")
            view_function = input(f"Enter view function for {url_pattern}: ")
            f.write(f"    path('{url_pattern}/', views.{view_function}, name='{view_function}'),\n")
        
        f.write("]\n")

if __name__ == "__main__":
    generate_urls_file()



"""