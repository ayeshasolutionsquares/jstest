<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Cookies</title>
</head>
<body>
    <form name="myForm">
    <input type = "text" name="user" placeholder="text area" >
    <input type = "button" value="set cookie" onclick="myFunction()"> 
    <p> click the following button and see the result:</p>
<input type="button" value="Get Cookie" onclick="ReadCookie()"/>
    </form>
        <script>
            function myFunction(){
              console.log('tesssss',document.myForm.user.value)
              if(document.myForm.user.value=="")
              alert("empty!")
           cookieval=escape(document.myForm.user.value)+";"
           document.cookie="name=" + cookieval;
           document.write("setting cookie :" +cookieval)
             } 


             function ReadCookie(){
              var allcookies = document.cookie;
              document.write ("All Cookies : " + allcookies );
// Get all the cookies pairs in an array
              cookiearray = allcookies.split(';');
// Now take key value pair out of this array
              for(var i=0; i<cookiearray.length; i++){
              name = cookiearray[i].split('=')[0];0
              value = cookiearray[i].split('=')[1];
              document.write ("Key is : " + name + " and Value is : " + value);
              }
               }
       </script>
</body>
</html>