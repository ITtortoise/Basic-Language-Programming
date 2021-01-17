var email = true;
var facebook = false;
var google = false;
if(email ||facebook||google){
    console.log("login successfull");
}

var authenticated = true;

// if(authenticated){
//     console.log("Show signout option");
// }
// else {
//     console.log("show login option");
// }

authenticated ? console.log("SIGN OUT") : console.log("LOG IN");