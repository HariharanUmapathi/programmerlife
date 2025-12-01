<?php

session_start();
if (isset($_POST["login"])) {
    $_SESSION["email"] = $_POST["email"];
    $_SESSION["password"] = $_POST["password"];
}

//header("location:dashboard.php");

?>

<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel='stylesheet' href='https://cdn.jsdelivr.net/npm/bootstrap@5.0.1/dist/css/bootstrap.min.css' />
    <script src="https://code.jquery.com/jquery-3.6.0.min.js" integrity="sha256-/xUj+3OJU5yExlq6GSYGSHk7tPXikynS7ogEvDej/m4=" crossorigin="anonymous"></script>
    <script src='https://cdn.jsdelivr.net/npm/bootstrap@5.0.1/dist/js/bootstrap.bundle.min.js'></script>
    <title>Black Pearl Digital World | Login</title>
    <style>
        .container-fluid {
            
        }

        #login-form 
        {
            background: white;
            padding: 3rem;
            align-self: center;
            justify-content: center;
            border-radius: 3rem;
            box-shadow: 0px 4px 7px rgba(0, 0, 0, 0.3);
            position: relative;
            max-width:600px;

        }

        #bg
        {
            position:absolute;
            z-index:0;
            width:100%;
            height:100vh;
            background-image: url("login-page-graph.jpeg");
            background-repeat: no-repeat;
            background-size: cover;
            background-position:0px;
        }
        #login-form>* {
            border-radius: 5px;
            border: none;
            padding: 5px;
            margin: 5px;
            
        }
    </style>
</head>

<body>

    <div class='container-fluid'>
            <div class='text-white' >
                <h1 >Black Pearl Digital World</h1>
                We are the team of digital Pirates who do your projects quickly
            </div>
            <a href="landing">Back</a>
            <div>
            <div id="bg"></div>
            <form id='login-form' class='form-horizontal' action='login.php' method='POST'>
                <input class='input-group' name='email' type='email' placeholder='Enter Your Email' />
                <input class='input-group' name='password' type='password' placeholder='Enter Your Password' />
                <input type='submit' value='Login' />
            </form>
    </div>
        </div>
        <div class='col-sm-12'>


        </div>
</body>

</html>