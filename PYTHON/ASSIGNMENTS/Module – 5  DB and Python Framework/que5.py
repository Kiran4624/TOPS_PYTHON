"""What is a QuerySet?Write program to create a new Post object in
database: 


What is a QuerySet : 

        A QuerySet is a collection of database queries that have been combined to retrieve data from the database. 
        It acts as an intermediary between the database and your Django models, allowing you to filter, order, and manipulate data before it is returned.


Write program to create a new Post object in database   :  

        
from blog.models import Post

def create_post(title, content):
    
    new_post = Post.objects.create(title=title, content=content)
    # Save the new Post object to the database
    new_post.save()

if __name__ == "__main__":
   
    title = input("Enter post title: ")
    content = input("Enter post content: ")
    
    
    create_post(title, content)
    print("Post created successfully!")
  



"""