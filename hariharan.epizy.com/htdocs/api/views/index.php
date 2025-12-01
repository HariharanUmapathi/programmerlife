<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel='stylesheet' href='https://cdn.jsdelivr.net/npm/bootstrap@5.0.1/dist/css/bootstrap.min.css' />
    <script src="https://code.jquery.com/jquery-3.6.0.min.js" integrity="sha256-/xUj+3OJU5yExlq6GSYGSHk7tPXikynS7ogEvDej/m4=" crossorigin="anonymous"></script>
    <script src='https://cdn.jsdelivr.net/npm/bootstrap@5.0.1/dist/js/bootstrap.bundle.min.js'></script>

    <title>Black Pearl Digital World</title>
</head>

<body>
    <style>
        .team {
            width: 100%;
            background-image: url("frontpage-graph.svg");
            background-repeat: no-repeat;
            background-size: cover;

        }

        #start {
            background-image: url("https://media.giphy.com/media/1rRTzaCmwLKjrLRn88/giphy.gif");
            background-repeat: no-repeat;
            margin: auto;
            background-size: auto;
            background-position: center;
        }
    </style>
    <div class='row text-center landing '>
        <a name='landing'></a>
        <h1> Welcome to My Project Host

        </h1>
        <div class='team' style='width:100%;height:40vh;'>

        </div>
        <a id='start' href='login.php' class='btn btn-success px-5'>Get Started</a>

    </div>
    
        <style>
            div.row {
                height: 100vh;
                transition: all 1s cubic-bezier(0.755, 0.05, 0.855, 0.06);
            }

           
            #start.btn {
                min-width: 200px;
                min-height: 30vh;
                position: relative;
                background-color: transparent;
                border: none;
                color: chartreuse;
                font-size: 2rem;
                font-weight: 900;
                top: 100px;
            }

            .landing {
                flex-direction: column;
            }

            .active {
                display: block;
            }
        </style>
        <script>
            $("#start").on('click', (e) => {
                var target = $(e.target).parent().hide();

            })
        </script>
</body>

</html>