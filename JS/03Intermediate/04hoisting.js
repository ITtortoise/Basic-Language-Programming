// var num =2;
// function sayMe(){
//     console.log("Say Me");
// }

// sayMe();

function tipper(a){
    var bill =parseInt(a);
    console.log(bill+5);
}
tipper("80");

//bigTipper("200"); //error will occure here..

var bigTipper = function (a){
    var bill =parseInt(a);
    console.log(bill+5);
}

bigTipper("200");//its a variable ..value can asing here..

//var name = "sohag";//there will be no error
console.log(name);
//var name = "mr H"//undefined

