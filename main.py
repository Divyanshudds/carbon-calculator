from flask import Flask,redirect,render_template 
# from flask_sqlalchemy import SQLAlchemy
#mydatabase connection 
local_server=True
app=Flask(__name__)
app.secret_key="divyanshusingh"


# app.config['SQLALCHEMY_DATABASE_URL']='mysql://username:password@localhost/databasename'

# app=Flask(__name__)
# app.config['SQLALCHEMY_DATABASE_URL']='mysql://root:@localhost/carbonuser'
# db=SQLAlchemy(app)

 
# class login(db.Model):
#     id=db.Column(db.Integer,primary_key=True)
#     password=db.Column(db.String(100))
#     name=db.Column(db.String(100))
          
     
      
@app.route("/")
def home():
    return redirect("index1.html") 
 
#connection checking db is connected or not
# @app.route("/test")
# def test():
#     try:
#        a=Test.query.all()
#         print(a)
#         return 'mY DATBASE IS CONNECTED'
#     except Exception as e:
#         print(e)
#         return f'MY DATABASE IS NOT CONNECTED'
    
    
    

app.run(debug=True)