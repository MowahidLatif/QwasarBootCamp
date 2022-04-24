const express = require('express')
const app = express()
app.listen(8080, function () {
  console.log('Node listening on Qwasar')
});


var listOFWives = [
    'Nancy barbato',
    'Ava Gardner',
    'Mia Farrow',
    'Barbara Marx',
]

var listOfSongs = [
    'Air for english horn',
    'All by my self',
    'All. i do is dream of you',
    'Accidents will happen',
    'After youve gone',
    'Aint she sweer',
    'A baby just like you',
    'The bells of christmas',
    'The best i ever had',
    'The best of everything',
    'Blue',
    'Blue hawaii',
    'Blue lace',
    'Blue moon',
    'Blue skies',
    'From this day forward',
    'The game is over',
    'Gentle in the Rain',
    'Get happy',
    'From the bottom to the Top',
]



// Return a random Song 
app.get('/', function(req, res){
    var randomSong = listOfSongs[Math.floor(Math.random() * listOfSongs.length)];
   res.send(randomSong);
});

//Return Birth Date 
app.get('/birth_date', function(req, res){
   res.send('December 12, 1915');
});

// Return Birth City 
app.get('/birth_city', function(req, res){
   res.send('California, USA');
});

// Return list of wives
app.get('/wives', function(req, res){
   res.send(listOFWives);
});

// Returning a Picture  
app.get('/picture', function (req, res) {
    res.send('<html><body> <img alt="Frank" src="https://upload.wikimedia.org/wikipedia/commons/a/af/Frank_Sinatra_%2757.jpg"></body></html>');
});

// Authentication process 
function auth (req, res, next){
    var authHeader = req.headers.authorization;
    if(!authHeader){
        var err = new Error('You are not authenticated')

        res.setHeader('WWW-Authenticate','Basic');
        err.status = 401
        next(err)
    }

    var auth = new Buffer(authHeader.split(' ')[1], 'base64').toString().split(':')
    var username = auth[0]
    var password = auth[1]

    if(username == 'admin' && password =='admin'){
        next();
    }else{
        var err = new Error('You are not authenticated')

        res.setHeader('WWW-Authenticate','Basic');
        //err.status = 401;
        return res.status(401).end();
    }

}

module.exports = auth;

app.get('/public', function(req, res){
  res.send('Everybody can see this page');
});

app.use(auth);
app.get('/protected', function(req, res){
  res.send('Welcome, authenticated client');
});

//              web-ea6920160-e942.docode.qwasar.io/ 
//              http://web-ea6920160-e942.docode.qwasar.io/protected                  
//              http://web-ea6920160-e942.docode.qwasar.io
//              curl -i http://admin:admin@web-ea6920160-e942.docode.qwasar.io/protected

