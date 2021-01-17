var user = "admin";

switch(user){
    case "admin" :
        console.log("You got full access");
        break;
    case "subadmin" :
        console.log("You got access to create/delete courses");
        break;
    case "testprep" :
        console.log("You got access to create/delelte tests");
        break;
    case "user" :
        console.log("You got access to counsume content")
        break;
    default:
        console.log("Tiral user");
        break;
}