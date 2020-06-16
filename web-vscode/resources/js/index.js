let album1 = document.getElementById('album1');
let album2 = document.getElementById('album2');
let album3 = document.getElementById('album3');

let vote1 = document.getElementById('vote1');
let vote2 = document.getElementById('vote2');
let vote3 = document.getElementById('vote3');


album1.addEventListener('click', function(){vote1.innerHTML++;});
album2.addEventListener('click', function(){vote2.innerHTML++;});
album3.addEventListener('click', function(){vote3.innerHTML++;});
