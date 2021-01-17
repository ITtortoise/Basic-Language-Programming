function getUserRole(name,role){
    switch(role){
        case "admin":
            return `${name} is admin with all access`;
            break; //this is not necessary
        case "subadmin":
            return `${name} is sub-admin with access to create and delete courses`;
            break;
        case "testprep":
            return `${name} is testprep with access to create and delete tests`;           
             break; 
        case "user":
            return `${name} is a user to consume content`;
            break;
        default :
            return `${name} is a trial user`;
            break;
        }
}
var getRole = getUserRole("shohag","admin");
console.log(getRole);